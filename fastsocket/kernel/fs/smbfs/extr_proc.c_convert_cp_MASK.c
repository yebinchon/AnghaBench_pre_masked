
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
struct nls_table {int (* char2uni ) (unsigned char const*,int,int *) ;int (* uni2char ) (int ,unsigned char*,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (unsigned char const*,int,int *) ;
 int FUNC_1 (int ,unsigned char*,int) ;
 int FUNC_2 (int ,unsigned char*,int) ;
 int FUNC_3 (int ,unsigned char*,int) ;

__attribute__((used)) static int FUNC_4(unsigned char *VAR_1, int VAR_2,
        const unsigned char *VAR_3, int VAR_4,
        struct nls_table *VAR_5,
        struct nls_table *VAR_6)
{
 int VAR_7 = 0;
 int VAR_8;
 wchar_t VAR_9;

 while (VAR_4 > 0) {

  VAR_8 = VAR_5->char2uni(VAR_3, VAR_4, &VAR_9);
  if (VAR_8 == -VAR_0) {
   VAR_4--;
   VAR_8 = FUNC_2(*VAR_3++, VAR_1, VAR_2);
   if (VAR_8 < 0)
    goto fail;
   VAR_1 += VAR_8;
   VAR_2 -= VAR_8;
   VAR_7 += VAR_8;
   continue;
  } else if (VAR_8 < 0)
   goto fail;
  VAR_3 += VAR_8;
  VAR_4 -= VAR_8;

  VAR_8 = VAR_6->uni2char(VAR_9, VAR_1, VAR_2);
  if (VAR_8 == -VAR_0)
   VAR_8 = FUNC_3(VAR_9, VAR_1, VAR_2);
  if (VAR_8 < 0)
   goto fail;
  VAR_1 += VAR_8;
  VAR_2 -= VAR_8;

  VAR_7 += VAR_8;
 }
 return VAR_7;
fail:
 return VAR_8;
}

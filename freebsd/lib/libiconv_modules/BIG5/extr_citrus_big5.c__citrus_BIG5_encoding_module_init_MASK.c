
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int excludes; } ;
typedef TYPE_1__ _BIG5EncodingInfo ;


 int FUNC_0 (int *) ;
 char* FUNC_1 (char const*,size_t*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,char*,int,int) ;
 int FUNC_4 (int ,void*,char const*,size_t) ;
 int FUNC_5 (void*,int ,int) ;
 int VAR_0 ;

__attribute__((used)) static int

FUNC_6(_BIG5EncodingInfo * __restrict VAR_1,
    const void * __restrict VAR_2, size_t VAR_3)
{
 const char *VAR_4;
 int VAR_5;

 FUNC_5((void *)VAR_1, 0, sizeof(*VAR_1));
 FUNC_0(&VAR_1->excludes);

 if (VAR_3 > 0 && VAR_2 != ((void*)0)) {
  VAR_4 = FUNC_1((const char *)VAR_2, &VAR_3);
  if (VAR_3 > 0 && *VAR_4 != '\0') {
   VAR_5 = FUNC_4(
       VAR_0, (void *)VAR_1, VAR_4, VAR_3);
   if (VAR_5 == 0)
    return (0);

   FUNC_2(VAR_1);
   FUNC_5((void *)VAR_1, 0, sizeof(*VAR_1));
   FUNC_0(&VAR_1->excludes);
  }
 }


 FUNC_3(VAR_1, "row", 0xA1, 0xFE);
 FUNC_3(VAR_1, "col", 0x40, 0x7E);
 FUNC_3(VAR_1, "col", 0xA1, 0xFE);

 return (0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct iconv_add_out {int dummy; } ;
struct iconv_add_in {int ia_datalen; int const* ia_data; int ia_to; int ia_from; int ia_converter; int ia_version; } ;
typedef int dout ;
typedef int din ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char const*) ;
 scalar_t__ FUNC_2 (char const*) ;
 int FUNC_3 (char*,struct iconv_add_out*,size_t*,struct iconv_add_in*,int) ;

int
FUNC_4(const char *VAR_6, const char *VAR_7, const u_char *VAR_8)
{
 struct iconv_add_in VAR_9;
 struct iconv_add_out VAR_10;
 size_t VAR_11;

 if (FUNC_2(VAR_7) >= VAR_2 || FUNC_2(VAR_6) >= VAR_2)
  return VAR_0;
 VAR_9.ia_version = VAR_1;
 FUNC_1(VAR_9.ia_converter, "xlat");
 FUNC_1(VAR_9.ia_from, VAR_7);
 FUNC_1(VAR_9.ia_to, VAR_6);
 VAR_9.ia_data = VAR_8;
 VAR_9.ia_datalen = 256;
 VAR_11 = sizeof(VAR_10);
 if (FUNC_3("kern.iconv.add", &VAR_10, &VAR_11, &VAR_9, sizeof(VAR_9)) == -1)
  return VAR_4;

 return 0;
}

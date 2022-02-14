
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bhnd_nvram_data {int dummy; } ;
typedef int bhnd_nvram_val ;
typedef int bhnd_nvram_type ;


 int VAR_0 ;
 int FUNC_0 (char*,char const*,...) ;
 int FUNC_1 (size_t) ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_2 (char const*) ;
 int VAR_3 ;
 char* FUNC_3 (int *,size_t*,int *) ;
 int FUNC_4 (int **,int *,int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char const*) ;

__attribute__((used)) static int
FUNC_8(struct bhnd_nvram_data *VAR_4, const char *VAR_5,
    bhnd_nvram_val *VAR_6, bhnd_nvram_val **VAR_7)
{
 bhnd_nvram_val *VAR_8;
 const char *VAR_9;
 bhnd_nvram_type VAR_10;
 size_t VAR_11;
 size_t VAR_12, VAR_13;
 int VAR_14;

 VAR_13 = VAR_2;


 if (!FUNC_6(FUNC_2(VAR_5)))
  return (VAR_1);


 VAR_12 = FUNC_7(VAR_5) + 1;
 if (VAR_13 < VAR_12) {
  FUNC_0("'%s=' exceeds maximum TLV_ENV record length\n",
      VAR_5);
  return (VAR_1);
 }
 VAR_13 -= VAR_12;


 VAR_14 = FUNC_4(&VAR_8, &VAR_3,
     VAR_6, VAR_0);
 if (VAR_14)
  return (VAR_14);


 VAR_9 = FUNC_3(VAR_8, &VAR_11, &VAR_10);
 if (VAR_13 < VAR_11) {
  FUNC_0("'%.*s\\0' exceeds maximum TLV_ENV record length\n",
      FUNC_1(VAR_11), VAR_9);

  FUNC_5(VAR_8);
  return (VAR_1);
 }
 VAR_13 -= VAR_12;


 *VAR_7 = VAR_8;
 return (0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pass ;
typedef int bpass ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned char*,int) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int *,char*,int ,char*,...) ;
 int FUNC_3 (char*,char*,unsigned char) ;
 char* FUNC_4 (char const*) ;
 char* FUNC_5 (char const*,int) ;
 int FUNC_6 (char*,char const*) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static const char *
FUNC_7(const char *VAR_5, int VAR_6)
{
 const char *VAR_7;
 char VAR_8[64 * 2 + 1];
 unsigned char VAR_9[64];
 char *VAR_10;
 int VAR_11, VAR_12;

 VAR_10 = FUNC_4(VAR_5);
 if (VAR_10 == ((void*)0))
  return (((void*)0));

 if (VAR_4 == VAR_1) {
  FUNC_0(VAR_9, sizeof(VAR_9));
  for (VAR_11 = 0; VAR_11 < (int)sizeof(VAR_9); VAR_11++)
   FUNC_3(&VAR_8[2 * VAR_11], "%02x", VAR_9[VAR_11]);
  VAR_8[sizeof(VAR_8) - 1] = '\0';

  VAR_12 = FUNC_2(((void*)0), "%s init %s -P %s", VAR_2,
      VAR_10, VAR_8);
  if (VAR_12) {

   FUNC_1(VAR_10);
   if (VAR_3 == 0)
    FUNC_6("%s: Device already in use", VAR_5);
   return (((void*)0));
  }
  VAR_12 = FUNC_2(((void*)0), "%s attach %s -p %s", VAR_2,
      VAR_10, VAR_8);
  FUNC_1(VAR_10);
  if (VAR_12) {
   FUNC_6("gbde (attach) error: %s", VAR_5);
   return (((void*)0));
  }
 }

 VAR_7 = FUNC_5(VAR_5, VAR_6);

 if (VAR_4 == VAR_0) {
  VAR_12 = FUNC_2(((void*)0), "%s detach %s", VAR_2, VAR_10);
  FUNC_1(VAR_10);
  if (VAR_12) {

   if (VAR_3 == 0)
    FUNC_6("%s: Device not found", VAR_5);
   return (((void*)0));
  }
 }

 return (VAR_7);
}

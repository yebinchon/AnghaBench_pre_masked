
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct roffsu {scalar_t__ unit; int scale; } ;
typedef int buf ;


 scalar_t__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 char* FUNC_0 (char const*,struct roffsu*,scalar_t__) ;
 int FUNC_1 (char const*) ;
 int VAR_5 ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (char*,int,char*,int) ;
 int FUNC_5 (char const*,char*) ;

__attribute__((used)) static void
FUNC_6(const char *VAR_6, int VAR_7)
{
 char VAR_8[24];
 struct roffsu VAR_9;
 const char *VAR_10;
 int VAR_11;

 FUNC_2(".RS", VAR_2);


 if (((void*)0) == VAR_6 || '\0' == *VAR_6 || (VAR_7 && !FUNC_5(VAR_6, "left")))
  VAR_11 = 0;
 else if (VAR_7 && !FUNC_5(VAR_6, "indent"))
  VAR_11 = 6;
 else if (VAR_7 && !FUNC_5(VAR_6, "indent-two"))
  VAR_11 = 12;
 else {
  VAR_10 = FUNC_0(VAR_6, &VAR_9, VAR_4);
  if (VAR_10 == ((void*)0) || *VAR_10 != '\0')
   VAR_11 = FUNC_1(VAR_6);
  else if (VAR_4 == VAR_9.unit)
   VAR_11 = VAR_9.scale;
  else {







   FUNC_3(VAR_6);
   VAR_5 |= VAR_3;
   return;
  }
 }





 if (VAR_1)
  VAR_11 += VAR_0[VAR_1 - 1];

 (void)FUNC_4(VAR_8, sizeof(VAR_8), "%dn", VAR_11);
 FUNC_3(VAR_8);
 VAR_5 |= VAR_3;
}

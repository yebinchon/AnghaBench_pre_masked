
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (char*) ;
 char* VAR_1 ;
 char* VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_4 ;
 char* VAR_5 ;
 int FUNC_2 (char*,char*) ;
 char* VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int FUNC_4(int VAR_8, char* VAR_9[])
{
 int VAR_10;
 int VAR_11=0;
 if (VAR_9[0]!=((void*)0) && *VAR_9[0]!=0) VAR_6=VAR_9[0];
 for (VAR_10=1; VAR_10<VAR_8; VAR_10++)
 {
  if (*VAR_9[VAR_10]!='-')
   break;
  else if (FUNC_0("--"))
  {
   ++VAR_10;
   if (VAR_11) ++VAR_11;
   break;
  }
  else if (FUNC_0("-"))
   break;
  else if (FUNC_0("-l"))
   ++VAR_4;
  else if (FUNC_0("-o"))
  {
   VAR_5=VAR_9[++VAR_10];
   if (VAR_5==((void*)0) || *VAR_5==0 || (*VAR_5=='-' && VAR_5[1]!=0))
    FUNC_3("'-o' needs argument");
   if (FUNC_0("-")) VAR_5=((void*)0);
  }
  else if (FUNC_0("-p"))
   VAR_3=0;
  else if (FUNC_0("-s"))
   VAR_7=1;
  else if (FUNC_0("-v"))
   ++VAR_11;
  else
   FUNC_3(VAR_9[VAR_10]);
 }
 if (VAR_10==VAR_8 && (VAR_4 || !VAR_3))
 {
  VAR_3=0;
  VAR_9[--VAR_10]=VAR_2;
 }
 if (VAR_11)
 {
  FUNC_2("%s\n",VAR_1);
  if (VAR_11==VAR_8-1) FUNC_1(VAR_0);
 }
 return VAR_10;
}

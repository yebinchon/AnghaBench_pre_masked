
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int off_t ;
typedef int desc ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int,char*,int) ;

const char *
FUNC_1(off_t VAR_3, int VAR_4)
{
 static char VAR_5[16];


 if (VAR_3 > (off_t)VAR_2 * 10000)
  FUNC_0(VAR_5, sizeof(VAR_5), VAR_4 ? "%jd GB" : "%10jd GB",
      VAR_3 / VAR_0);


 else if (VAR_3 > VAR_1 * 10000)
  FUNC_0(VAR_5, sizeof(VAR_5), VAR_4 ? "%jd MB" : "%10jd MB",
      VAR_3 / VAR_2);


 else if (VAR_3 > 10000)
  FUNC_0(VAR_5, sizeof(VAR_5), VAR_4 ? "%jd kB" : "%10jd kB",
      VAR_3 / VAR_1);


 else
  FUNC_0(VAR_5, sizeof(VAR_5), VAR_4 ? "%jd  B" : "%10jd  B", VAR_3);

 return (VAR_5);
}

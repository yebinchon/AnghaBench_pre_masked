
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parse {scalar_t__ ssize; scalar_t__ slen; scalar_t__ strip; scalar_t__ stripdata; } ;
typedef scalar_t__ sopno ;
typedef int sop ;
typedef int RCHAR_T ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct parse*,scalar_t__) ;
 int FUNC_3 (char*,char*,size_t) ;

__attribute__((used)) static sopno
FUNC_4(struct parse *VAR_0,
    sopno VAR_1,
    sopno VAR_2)
{
 sopno VAR_3 = FUNC_0();
 sopno VAR_4 = VAR_2 - VAR_1;

 FUNC_1(VAR_2 >= VAR_1);
 if (VAR_4 == 0)
  return(VAR_3);
 if (!FUNC_2(VAR_0, VAR_0->ssize + VAR_4))
  return VAR_3;
 FUNC_1(VAR_0->ssize >= VAR_0->slen + VAR_4);
 (void) FUNC_3((char *)(VAR_0->strip + VAR_0->slen),
  (char *)(VAR_0->strip + VAR_1), (size_t)VAR_4*sizeof(sop));
 (void) FUNC_3((char *)(VAR_0->stripdata + VAR_0->slen),
  (char *)(VAR_0->stripdata + VAR_1), (size_t)VAR_4*sizeof(RCHAR_T));
 VAR_0->slen += VAR_4;
 return(VAR_3);
}

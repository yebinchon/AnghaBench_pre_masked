
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dfa {scalar_t__ nregexps; scalar_t__ nleaves; scalar_t__ depth; scalar_t__ tindex; scalar_t__ cindex; } ;


 scalar_t__ FUNC_0 (unsigned char) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int FUNC_2 (struct dfa*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct dfa*) ;
 int FUNC_5 (struct dfa*) ;
 int FUNC_6 (char const*,size_t,struct dfa*) ;
 int FUNC_7 (char*) ;
 char* FUNC_8 (size_t) ;
 char FUNC_9 (unsigned char) ;

void
FUNC_10 (char const *VAR_1, size_t VAR_2, struct dfa *VAR_3, int VAR_4)
{
  if (VAR_0)
    {
      char *VAR_5;
      int VAR_6;

      VAR_5 = FUNC_8(VAR_2);
      if (!VAR_5)
 FUNC_3(FUNC_1("out of memory"));


      VAR_0 = 0;
      for (VAR_6 = 0; VAR_6 < VAR_2; ++VAR_6)
 if (FUNC_0 ((unsigned char) VAR_1[VAR_6]))
   VAR_5[VAR_6] = FUNC_9 ((unsigned char) VAR_1[VAR_6]);
 else
   VAR_5[VAR_6] = VAR_1[VAR_6];

      FUNC_4(VAR_3);
      FUNC_6(VAR_5, VAR_2, VAR_3);
      FUNC_7(VAR_5);
      FUNC_5(VAR_3);
      VAR_3->cindex = VAR_3->tindex = VAR_3->depth = VAR_3->nleaves = VAR_3->nregexps = 0;
      VAR_0 = 1;
      FUNC_6(VAR_1, VAR_2, VAR_3);
      FUNC_2(VAR_3, VAR_4);
    }
  else
    {
        FUNC_4(VAR_3);
        FUNC_6(VAR_1, VAR_2, VAR_3);
 FUNC_5(VAR_3);
        FUNC_2(VAR_3, VAR_4);
    }
}

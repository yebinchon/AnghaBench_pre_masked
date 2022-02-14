
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;


 int FUNC_0 (int ) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,char*,char const*,...) ;
 scalar_t__ FUNC_2 (char*,int ) ;

void
FUNC_3 (const char *VAR_5, unsigned int VAR_6,
      tree VAR_7)
{
  char VAR_8[8], *VAR_9 = VAR_8;

  if ((VAR_6 & (VAR_0 | VAR_3)) == 0)

    {
      *VAR_9++ ='d';
      *VAR_9++ ='r';
    }
  else
    {
      if (VAR_6 & VAR_0)
        *VAR_9++ = 'x';
      if (VAR_6 & VAR_3)
        *VAR_9++ = 'w';
      if (VAR_6 & VAR_2)
        *VAR_9++ = 's';
    }

  *VAR_9 = '\0';

  FUNC_1 (VAR_4, "\t.section\t%s,\"%s\"\n", VAR_5, VAR_8);

  if (VAR_6 & VAR_1)
    {






      bool VAR_10 = (VAR_6 & VAR_0)
        || FUNC_2 ("selectany",
        FUNC_0 (VAR_7));
      FUNC_1 (VAR_4, "\t.linkonce %s\n",
        (VAR_10 ? "discard" : "same_size"));
    }
}

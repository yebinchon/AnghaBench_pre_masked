
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*,unsigned int,int ) ;
 int FUNC_1 (int ,char*,char*) ;

void
FUNC_2 (const char *VAR_3, unsigned int VAR_4,
         tree VAR_5)
{
  FUNC_0 (VAR_3, VAR_4, VAR_5);

  if (VAR_4 & VAR_1)
    {



      FUNC_1 (VAR_2, "\t.linkonce %s\n",
        (VAR_4 & VAR_0 ? "discard" : "same_size"));
    }
}

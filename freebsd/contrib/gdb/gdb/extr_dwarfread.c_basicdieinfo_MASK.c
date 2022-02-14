
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct objfile {int dummy; } ;
struct dieinfo {char* die; int die_ref; scalar_t__ die_length; void* die_tag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 void* VAR_5 ;
 int FUNC_0 (int *,char*,int ,int ,int) ;
 struct dieinfo* VAR_6 ;
 char* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct dieinfo*,int ,int) ;
 int VAR_10 ;
 void* FUNC_2 (char*,scalar_t__,int ,struct objfile*) ;

__attribute__((used)) static void
FUNC_3 (struct dieinfo *VAR_11, char *VAR_12, struct objfile *VAR_13)
{
  VAR_6 = VAR_11;
  FUNC_1 (VAR_11, 0, sizeof (struct dieinfo));
  VAR_11->die = VAR_12;
  VAR_11->die_ref = VAR_8 + (VAR_12 - VAR_7);
  VAR_11->die_length = FUNC_2 (VAR_12, VAR_3, VAR_2,
        VAR_13);
  if ((VAR_11->die_length < VAR_3) ||
      ((VAR_12 + VAR_11->die_length) > (VAR_7 + VAR_9)))
    {
      FUNC_0 (&VAR_10,
   "DIE @ 0x%x \"%s\", malformed DIE, bad length (%ld bytes)",
   VAR_0, VAR_1, VAR_11->die_length);
      VAR_11->die_length = 0;
    }
  else if (VAR_11->die_length < (VAR_3 + VAR_4))
    {
      VAR_11->die_tag = VAR_5;
    }
  else
    {
      VAR_12 += VAR_3;
      VAR_11->die_tag = FUNC_2 (VAR_12, VAR_4, VAR_2,
         VAR_13);
    }
}

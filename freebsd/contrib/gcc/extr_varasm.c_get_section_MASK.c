
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct named_section {int dummy; } ;
struct TYPE_7__ {unsigned int flags; } ;
struct TYPE_9__ {scalar_t__ decl; int name; TYPE_1__ common; } ;
struct TYPE_8__ {unsigned int flags; } ;
struct TYPE_10__ {TYPE_3__ named; TYPE_2__ common; } ;
typedef TYPE_4__ section ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (char*,scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 TYPE_4__* FUNC_2 (int) ;
 int FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (int ,char const*,int ,int ) ;
 int FUNC_5 (char const*) ;
 int VAR_4 ;

section *
FUNC_6 (const char *VAR_5, unsigned int VAR_6, tree VAR_7)
{
  section *VAR_8, **VAR_9;

  VAR_9 = (section **)
    FUNC_4 (VAR_4, VAR_5,
         FUNC_5 (VAR_5), VAR_0);
  VAR_6 |= VAR_2;
  if (*VAR_9 == ((void*)0))
    {
      VAR_8 = FUNC_2 (sizeof (struct named_section));
      VAR_8->named.common.flags = VAR_6;
      VAR_8->named.name = FUNC_3 (VAR_5);
      VAR_8->named.decl = VAR_7;
      *VAR_9 = VAR_8;
    }
  else
    {
      VAR_8 = *VAR_9;
      if ((VAR_8->common.flags & ~VAR_1) != VAR_6
   && ((VAR_8->common.flags | VAR_6) & VAR_3) == 0)
 {

   if (VAR_7 == 0)
     VAR_7 = VAR_8->named.decl;
   FUNC_1 (VAR_7);
   FUNC_0 ("%+D causes a section type conflict", VAR_7);
 }
    }
  return VAR_8;
}

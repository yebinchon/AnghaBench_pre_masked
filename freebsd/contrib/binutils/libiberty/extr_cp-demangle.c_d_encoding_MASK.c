
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct demangle_component* right; } ;
struct TYPE_4__ {TYPE_1__ s_binary; } ;
struct demangle_component {scalar_t__ type; TYPE_2__ u; } ;
struct d_info {int options; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct d_info*,int ) ;
 struct demangle_component* FUNC_1 (struct demangle_component*) ;
 struct demangle_component* FUNC_2 (struct d_info*,int ,struct demangle_component*,int ) ;
 struct demangle_component* FUNC_3 (struct d_info*) ;
 char FUNC_4 (struct d_info*) ;
 struct demangle_component* FUNC_5 (struct demangle_component*) ;
 struct demangle_component* FUNC_6 (struct d_info*) ;
 int FUNC_7 (struct demangle_component*) ;

__attribute__((used)) static struct demangle_component *
FUNC_8 (struct d_info *VAR_6, int VAR_7)
{
  char VAR_8 = FUNC_4 (VAR_6);

  if (VAR_8 == 'G' || VAR_8 == 'T')
    return FUNC_6 (VAR_6);
  else
    {
      struct demangle_component *VAR_9;

      VAR_9 = FUNC_3 (VAR_6);

      if (VAR_9 != ((void*)0) && VAR_7 && (VAR_6->options & VAR_5) == 0)
 {



   while (VAR_9->type == VAR_2
   || VAR_9->type == VAR_4
   || VAR_9->type == VAR_0)
     VAR_9 = FUNC_1 (VAR_9);





   if (VAR_9->type == VAR_1)
     {
       struct demangle_component *VAR_10;

       VAR_10 = FUNC_5 (VAR_9);
       while (VAR_10->type == VAR_2
       || VAR_10->type == VAR_4
       || VAR_10->type == VAR_0)
  VAR_10 = FUNC_1 (VAR_10);
       VAR_9->u.s_binary.right = VAR_10;
     }

   return VAR_9;
 }

      VAR_8 = FUNC_4 (VAR_6);
      if (VAR_9 == ((void*)0) || VAR_8 == '\0' || VAR_8 == 'E')
 return VAR_9;
      return FUNC_2 (VAR_6, VAR_3, VAR_9,
     FUNC_0 (VAR_6, FUNC_7 (VAR_9)));
    }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct demangle_component {int dummy; } ;
struct d_info {int expansion; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 struct demangle_component* FUNC_0 (struct d_info*) ;
 int FUNC_1 (struct d_info*,char) ;
 scalar_t__ FUNC_2 (struct d_info*,char) ;
 struct demangle_component* FUNC_3 (struct d_info*,int ) ;
 struct demangle_component* FUNC_4 (struct d_info*,int ,struct demangle_component*,struct demangle_component*) ;
 struct demangle_component* FUNC_5 (struct d_info*) ;
 int FUNC_6 (struct d_info*) ;
 long FUNC_7 (struct d_info*) ;

__attribute__((used)) static struct demangle_component *
FUNC_8 (struct d_info *VAR_13)
{
  VAR_13->expansion += 20;
  if (FUNC_2 (VAR_13, 'T'))
    {
      switch (FUNC_6 (VAR_13))
 {
 case 'V':
   VAR_13->expansion -= 5;
   return FUNC_4 (VAR_13, VAR_11,
         FUNC_0 (VAR_13), ((void*)0));
 case 'T':
   VAR_13->expansion -= 10;
   return FUNC_4 (VAR_13, VAR_12,
         FUNC_0 (VAR_13), ((void*)0));
 case 'I':
   return FUNC_4 (VAR_13, VAR_7,
         FUNC_0 (VAR_13), ((void*)0));
 case 'S':
   return FUNC_4 (VAR_13, VAR_9,
         FUNC_0 (VAR_13), ((void*)0));

 case 'h':
   if (! FUNC_1 (VAR_13, 'h'))
     return ((void*)0);
   return FUNC_4 (VAR_13, VAR_6,
         FUNC_3 (VAR_13, 0), ((void*)0));

 case 'v':
   if (! FUNC_1 (VAR_13, 'v'))
     return ((void*)0);
   return FUNC_4 (VAR_13, VAR_10,
         FUNC_3 (VAR_13, 0), ((void*)0));

 case 'c':
   if (! FUNC_1 (VAR_13, '\0'))
     return ((void*)0);
   if (! FUNC_1 (VAR_13, '\0'))
     return ((void*)0);
   return FUNC_4 (VAR_13, VAR_1,
         FUNC_3 (VAR_13, 0), ((void*)0));

 case 'C':
   {
     struct demangle_component *VAR_14;
     long VAR_15;
     struct demangle_component *VAR_16;

     VAR_14 = FUNC_0 (VAR_13);
     VAR_15 = FUNC_7 (VAR_13);
     if (VAR_15 < 0)
       return ((void*)0);
     if (! FUNC_2 (VAR_13, '_'))
       return ((void*)0);
     VAR_16 = FUNC_0 (VAR_13);


     VAR_13->expansion += 5;
     return FUNC_4 (VAR_13, VAR_0,
    VAR_16, VAR_14);
   }

 case 'F':
   return FUNC_4 (VAR_13, VAR_8,
         FUNC_0 (VAR_13), ((void*)0));
 case 'J':
   return FUNC_4 (VAR_13, VAR_4,
         FUNC_0 (VAR_13), ((void*)0));

 default:
   return ((void*)0);
 }
    }
  else if (FUNC_2 (VAR_13, 'G'))
    {
      switch (FUNC_6 (VAR_13))
 {
 case 'V':
   return FUNC_4 (VAR_13, VAR_2, FUNC_5 (VAR_13), ((void*)0));

 case 'R':
   return FUNC_4 (VAR_13, VAR_5, FUNC_5 (VAR_13),
         ((void*)0));

 case 'A':
   return FUNC_4 (VAR_13, VAR_3,
         FUNC_3 (VAR_13, 0), ((void*)0));

 default:
   return ((void*)0);
 }
    }
  else
    return ((void*)0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
struct lookup_base_data_s {scalar_t__ binfo; int via_virtual; int ambiguous; int t; scalar_t__ want_any; int repeated_base; int base; } ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (scalar_t__,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int) ;

__attribute__((used)) static tree
FUNC_4 (tree VAR_3, void *VAR_4)
{
  struct lookup_base_data_s *VAR_5 = (struct lookup_base_data_s *) VAR_4;

  if (FUNC_1 (FUNC_0 (VAR_3), VAR_5->base))
    {
      if (!VAR_5->binfo)
 {
   VAR_5->binfo = VAR_3;
   VAR_5->via_virtual
     = FUNC_2 (VAR_5->binfo, VAR_5->t) != VAR_0;

   if (!VAR_5->repeated_base)

     return VAR_3;

   if (VAR_5->want_any && !VAR_5->via_virtual)


     return VAR_3;

   return VAR_1;
 }
      else
 {
   FUNC_3 (VAR_3 != VAR_5->binfo);


   if (!VAR_5->want_any)
     {

       VAR_5->binfo = VAR_0;
       VAR_5->ambiguous = 1;
       return VAR_2;
     }


   if (!FUNC_2 (VAR_3, VAR_5->t))
     {
       VAR_5->binfo = VAR_3;
       VAR_5->via_virtual = 0;
       return VAR_3;
     }



   return VAR_1;
 }
    }

  return VAR_0;
}

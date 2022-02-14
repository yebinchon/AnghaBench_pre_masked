
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ fbtp_patchpoint; struct TYPE_6__* fbtp_tracenext; struct TYPE_6__* fbtp_hashnext; } ;
typedef TYPE_1__ fbt_probe_t ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 TYPE_1__** VAR_1 ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (char*,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_3(fbt_probe_t *VAR_2)
{
 fbt_probe_t *VAR_3, *VAR_4, *VAR_5;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_2->fbtp_patchpoint);
 for (VAR_3 = VAR_1[VAR_6], VAR_4 = ((void*)0); VAR_3 != ((void*)0);
     VAR_4 = VAR_3, VAR_3 = VAR_3->fbtp_hashnext) {
  if (VAR_3 == VAR_2) {
   if ((VAR_5 = VAR_2->fbtp_tracenext) != ((void*)0))
    VAR_5->fbtp_hashnext = VAR_3->fbtp_hashnext;
   else
    VAR_5 = VAR_3->fbtp_hashnext;
   if (VAR_4 != ((void*)0))
    VAR_4->fbtp_hashnext = VAR_5;
   else
    VAR_1[VAR_6] = VAR_5;
   goto free;
  } else if (VAR_3->fbtp_patchpoint == VAR_2->fbtp_patchpoint) {
   for (VAR_5 = VAR_3; VAR_5->fbtp_tracenext != ((void*)0);
       VAR_5 = VAR_5->fbtp_tracenext) {
    if (VAR_2 == VAR_5->fbtp_tracenext) {
     VAR_5->fbtp_tracenext =
         VAR_2->fbtp_tracenext;
     goto free;
    }
   }
  }
 }
 FUNC_2("probe %p not found in hash table", VAR_2);
free:
 FUNC_1(VAR_2, VAR_0);
}

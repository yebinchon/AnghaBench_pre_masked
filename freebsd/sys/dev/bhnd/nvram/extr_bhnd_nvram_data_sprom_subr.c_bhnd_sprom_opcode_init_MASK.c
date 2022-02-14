
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct bhnd_sprom_layout {size_t num_vars; } ;
typedef int idx ;
struct TYPE_7__ {size_t num_idx; int * idx; struct bhnd_sprom_layout const* layout; } ;
typedef TYPE_1__ bhnd_sprom_opcode_state ;
typedef int bhnd_sprom_opcode_idx_entry ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,char*,int) ;
 int * FUNC_2 (size_t,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*,int *) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int VAR_3 ;
 int FUNC_7 (int *,size_t,int,int ) ;

int
FUNC_8(bhnd_sprom_opcode_state *VAR_4,
    const struct bhnd_sprom_layout *VAR_5)
{
 bhnd_sprom_opcode_idx_entry *VAR_6;
 size_t VAR_7, VAR_8;
 int VAR_9;

 VAR_6 = ((void*)0);

 VAR_4->layout = VAR_5;
 VAR_4->idx = ((void*)0);
 VAR_4->num_idx = 0;


 if ((VAR_9 = FUNC_6(VAR_4)))
  return (VAR_9);


 VAR_8 = VAR_4->layout->num_vars;
 VAR_6 = FUNC_2(VAR_8, sizeof(*VAR_6));
 if (VAR_6 == ((void*)0))
  return (VAR_1);

 for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {

  if ((VAR_9 = FUNC_5(VAR_4))) {
   FUNC_1(VAR_4, "error reading expected variable "
       "entry: %d\n", VAR_9);
   FUNC_3(VAR_6);
   return (VAR_9);
  }


  VAR_9 = FUNC_4(VAR_4, &VAR_6[VAR_7]);
  if (VAR_9) {
   FUNC_1(VAR_4, "error initializing index for "
       "entry: %d\n", VAR_9);
   FUNC_3(VAR_6);
   return (VAR_9);
  }
 }



 if ((VAR_9 = FUNC_5(VAR_4)) != VAR_0) {
  FUNC_0("expected EOF parsing binding table: %d\n", VAR_9);
  FUNC_3(VAR_6);
  return (VAR_2);
 }


 if ((VAR_9 = FUNC_6(VAR_4))) {
  FUNC_3(VAR_6);
  return (VAR_9);
 }


        FUNC_7(VAR_6, VAR_8, sizeof(VAR_6[0]), VAR_3);

 VAR_4->idx = VAR_6;
 VAR_4->num_idx = VAR_8;

 return (0);
}

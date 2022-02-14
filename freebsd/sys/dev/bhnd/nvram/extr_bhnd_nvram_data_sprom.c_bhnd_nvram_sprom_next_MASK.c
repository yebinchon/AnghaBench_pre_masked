
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bhnd_nvram_vardefn {int flags; char const* name; int type; } ;
struct bhnd_nvram_sprom {int state; } ;
struct bhnd_nvram_data {int dummy; } ;
typedef void bhnd_sprom_opcode_idx_entry ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int VAR_1 ;
 struct bhnd_nvram_vardefn* FUNC_1 (void*) ;
 int FUNC_2 (struct bhnd_nvram_data*,void*,int *,size_t*,int ) ;
 void* FUNC_3 (int *,void*) ;

__attribute__((used)) static const char *
FUNC_4(struct bhnd_nvram_data *VAR_2, void **VAR_3)
{
 struct bhnd_nvram_sprom *VAR_4;
 bhnd_sprom_opcode_idx_entry *VAR_5;
 const struct bhnd_nvram_vardefn *VAR_6;

 VAR_4 = (struct bhnd_nvram_sprom *)VAR_2;


 VAR_5 = *VAR_3;
 while ((VAR_5 = FUNC_3(&VAR_4->state, VAR_5))) {

  *VAR_3 = VAR_5;
  VAR_6 = FUNC_1(*VAR_3);
  FUNC_0(VAR_6 != ((void*)0), ("invalid cookiep %p", VAR_3));



  if (VAR_6->flags & VAR_0) {
   int VAR_7;
   size_t VAR_8;

   VAR_7 = FUNC_2(VAR_2, *VAR_3, ((void*)0),
       &VAR_8, VAR_6->type);
   if (VAR_7) {
    FUNC_0(VAR_7 == VAR_1, ("unexpected "
        "error parsing variable: %d", VAR_7));
    continue;
   }
  }


  return (VAR_6->name);
 }


 return (((void*)0));
}

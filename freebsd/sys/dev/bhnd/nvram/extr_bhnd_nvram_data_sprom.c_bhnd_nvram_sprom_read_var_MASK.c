
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union bhnd_nvram_sprom_storage {int dummy; } bhnd_nvram_sprom_storage ;
typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_4__ {size_t skip_out; int skip_in; size_t count; scalar_t__ skip_in_negative; } ;
struct TYPE_3__ {size_t nelem; int have_bind; int mask; int shift; int base_type; TYPE_2__ bind; } ;
struct bhnd_sprom_opcode_state {scalar_t__ var_state; size_t offset; TYPE_1__ var; } ;
struct bhnd_sprom_opcode_idx_entry {int vid; } ;
struct bhnd_nvram_vardefn {size_t nelem; int flags; int type; int fmt; int name; } ;
struct bhnd_nvram_io {int dummy; } ;
typedef int intv ;
typedef TYPE_1__ bhnd_sprom_opcode_var ;
typedef TYPE_2__ bhnd_sprom_opcode_bind ;
typedef int bhnd_nvram_val ;
typedef int bhnd_nvram_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (char*,size_t,...) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (int ) ;
 struct bhnd_nvram_vardefn* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct bhnd_nvram_vardefn const*,struct bhnd_nvram_io*,int ,size_t,int,int,int*) ;
 int FUNC_6 (int *,int ,union bhnd_nvram_sprom_storage*,size_t,int ,int ) ;
 int FUNC_7 (int*,int,int ,void*,size_t*,int ) ;
 size_t FUNC_8 (int *,int ,int ,int) ;
 int FUNC_9 (struct bhnd_sprom_opcode_state*,int*) ;
 int FUNC_10 (struct bhnd_sprom_opcode_state*,struct bhnd_sprom_opcode_idx_entry*) ;
 int FUNC_11 (struct bhnd_sprom_opcode_state*) ;
 int FUNC_12 (struct bhnd_sprom_opcode_state*,struct bhnd_sprom_opcode_idx_entry*) ;
 int FUNC_13 (union bhnd_nvram_sprom_storage*,int ,size_t) ;

__attribute__((used)) static int
FUNC_14(struct bhnd_sprom_opcode_state *VAR_9,
    struct bhnd_sprom_opcode_idx_entry *VAR_10, struct bhnd_nvram_io *VAR_11,
    union bhnd_nvram_sprom_storage *VAR_12, bhnd_nvram_val *VAR_13)
{
 union bhnd_nvram_sprom_storage *VAR_14;
 const struct bhnd_nvram_vardefn *VAR_15;
 bhnd_nvram_type VAR_16;
 uint32_t VAR_17;
 size_t VAR_18, VAR_19, VAR_20;
 size_t VAR_21;
 bool VAR_22;
 int VAR_23;


 VAR_15 = FUNC_3(VAR_10->vid);
 FUNC_0(VAR_15 != ((void*)0), ("invalid entry"));
 if ((VAR_23 = FUNC_10(VAR_9, VAR_10))) {
  FUNC_1("variable evaluation failed: %d\n", VAR_23);
  return (VAR_23);
 }

 VAR_21 = VAR_9->var.nelem;
 if (VAR_21 > VAR_15->nelem) {
  FUNC_1("SPROM array element count %zu cannot be "
      "represented by '%s' element count of %hhu\n", VAR_21,
      VAR_15->name, VAR_15->nelem);
  return (VAR_4);
 }


 VAR_16 = FUNC_2(VAR_15->type);


 if ((VAR_20 = FUNC_8(((void*)0), 0, VAR_16, 1)) == 0) {


  FUNC_1("invalid SPROM data type: %d", VAR_15->type);
  return (VAR_4);
 }
 VAR_18 = VAR_21 * VAR_20;


 VAR_14 = VAR_12;
 if (VAR_18 > sizeof(*VAR_12)) {
  FUNC_1("error decoding '%s', SPROM_ARRAY_MAXLEN "
      "incorrect\n", VAR_15->name);
  return (VAR_4);
 }



 FUNC_13(VAR_14, 0, VAR_18);




 if ((VAR_23 = FUNC_12(VAR_9, VAR_10))) {
  FUNC_1("variable seek failed: %d\n", VAR_23);
  return (VAR_23);
 }

 VAR_19 = 0;
 VAR_17 = 0x0;
 if (VAR_15->flags & VAR_3)
  VAR_22 = 1;
 else
  VAR_22 = 0;
 while ((VAR_23 = FUNC_11(VAR_9)) == 0) {
  bhnd_sprom_opcode_bind *VAR_24;
  bhnd_sprom_opcode_var *VAR_25;
  bhnd_nvram_type VAR_26;
  size_t VAR_27;
  size_t VAR_28;
  uint32_t VAR_29;
  void *VAR_30;

  FUNC_0(
      VAR_9->var_state >= VAR_8,
      ("invalid var state"));
  FUNC_0(VAR_9->var.have_bind, ("invalid bind state"));

  VAR_25 = &VAR_9->var;
  VAR_24 = &VAR_9->var.bind;

  if (VAR_19 >= VAR_21) {
   FUNC_1("output skip %u positioned "
       "%zu beyond nelem %zu\n",
       VAR_24->skip_out, VAR_19, VAR_21);
   return (VAR_5);
  }


  VAR_29 = VAR_24->skip_in;
  VAR_23 = FUNC_9(VAR_9, &VAR_29);
  if (VAR_23)
   return (VAR_23);


  VAR_27 = VAR_9->offset;
  for (size_t VAR_31 = 0; VAR_31 < VAR_24->count; VAR_31++) {


   VAR_23 = FUNC_5(VAR_15, VAR_11,
       VAR_25->base_type,
       VAR_27,
       VAR_25->mask,
       VAR_25->shift,
       &VAR_17);
   if (VAR_23)
    return (VAR_23);



   if (VAR_15->flags & VAR_3 &&
       VAR_22)
   {
    uint32_t VAR_32;

    VAR_32 = VAR_25->mask;
    if (VAR_25->shift > 0)
     VAR_32 >>= VAR_25->shift;
    else if (VAR_25->shift < 0)
     VAR_32 <<= -VAR_25->shift;

    if ((VAR_17 & VAR_32) != VAR_32)
     VAR_22 = 0;
   }




   if (VAR_24->skip_in_negative) {
    VAR_27 -= VAR_29;
   } else {
    VAR_27 += VAR_29;
   }



   if (VAR_24->skip_out == 0)
    continue;





   if (FUNC_4(VAR_16))
    VAR_26 = VAR_0;
   else
    VAR_26 = VAR_1;



   VAR_30 = (uint8_t *)VAR_14 + (VAR_20 * VAR_19);


   VAR_28 = VAR_20;
   VAR_23 = FUNC_7(&VAR_17, sizeof(VAR_17),
       VAR_26, VAR_30, &VAR_28, VAR_16);
   if (VAR_23)
    return (VAR_23);


   VAR_17 = 0x0;


   if (VAR_7 - VAR_24->skip_out < VAR_19) {
    FUNC_1("output skip %u would overflow "
        "%zu\n", VAR_24->skip_out, VAR_19);
    return (VAR_5);
   }

   VAR_19 += VAR_24->skip_out;
  }
 }



 FUNC_0(VAR_23 != 0, ("loop terminated early"));
 if (VAR_23 != VAR_6) {
  return (VAR_23);
 }



 if ((VAR_15->flags & VAR_3) && VAR_22)
  return (VAR_6);


 return (FUNC_6(VAR_13, VAR_15->fmt, VAR_14, VAR_18, VAR_15->type,
     VAR_2));
}

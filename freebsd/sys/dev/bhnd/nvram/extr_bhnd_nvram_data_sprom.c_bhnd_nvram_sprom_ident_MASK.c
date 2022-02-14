
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
typedef int* u_char ;
struct bhnd_nvram_io {int dummy; } ;
typedef int srevcrc ;
typedef int buf ;
struct TYPE_5__ {int flags; size_t size; size_t srev_offset; int rev; int magic_value; } ;
typedef TYPE_1__ bhnd_sprom_layout ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,size_t,...) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t FUNC_2 (size_t,int) ;
 int FUNC_3 (int**,size_t,int) ;
 int FUNC_4 (struct bhnd_nvram_io*,size_t,int**,int) ;
 int FUNC_5 (struct bhnd_nvram_io*,TYPE_1__ const*,int *) ;
 TYPE_1__* VAR_5 ;
 size_t VAR_6 ;

__attribute__((used)) static int
FUNC_6(struct bhnd_nvram_io *VAR_7,
    const bhnd_sprom_layout **VAR_8)
{
 uint8_t VAR_9;
 size_t VAR_10;
 size_t VAR_11;
 int VAR_12;

 VAR_9 = VAR_0;
 VAR_10 = 0;
 VAR_11 = 0;



 for (size_t VAR_13 = 0; VAR_13 < VAR_6; VAR_13++) {
  const bhnd_sprom_layout *VAR_14;
  u_char VAR_15[512];
  size_t VAR_16;
  uint16_t VAR_17;
  uint8_t VAR_18[2];
  uint8_t VAR_19;
  bool VAR_20;
  bool VAR_21;

  VAR_14 = &VAR_5[VAR_13];
  VAR_20 = 1;

  VAR_21 = 1;
  if ((VAR_14->flags & VAR_4))
   VAR_21 = 0;
  if (VAR_11 > VAR_14->size)
   FUNC_1("SPROM layout defined out-of-order");

  VAR_16 = VAR_14->size - VAR_11;

  while (VAR_16 > 0) {
   size_t VAR_22;

   VAR_22 = FUNC_2(VAR_16, sizeof(VAR_15));

   if ((VAR_12 = FUNC_4(VAR_7, VAR_11, VAR_15, VAR_22)))
    return (VAR_12);

   VAR_9 = FUNC_3(VAR_15, VAR_22, VAR_9);
   VAR_20 = (VAR_9 == VAR_1);
   if (!VAR_20)
    VAR_10++;

   VAR_16 -= VAR_22;
   VAR_11 += VAR_22;
  }



  VAR_12 = FUNC_4(VAR_7, VAR_14->srev_offset, &VAR_18,
      sizeof(VAR_18));
  if (VAR_12)
   return (VAR_12);

  VAR_19 = VAR_18[0];




  if (VAR_14->rev == 1 && VAR_19 == 0x10)
   VAR_19 = 0x1;


  if (VAR_19 != VAR_14->rev)
   continue;



  VAR_12 = FUNC_5(VAR_7, VAR_14, &VAR_17);
  if (VAR_12) {

   if (VAR_20 || VAR_2) {
    FUNC_0("invalid sprom %hhu signature: "
         "0x%hx (expected 0x%hx)\n", VAR_19,
         VAR_17, VAR_14->magic_value);

     return (VAR_3);
   }

   continue;
  }


  if (!VAR_20) {


   if (VAR_21 || VAR_2) {
    FUNC_0("sprom %hhu CRC error (crc=%#hhx, "
         "expected=%#x)\n", VAR_19, VAR_9,
         VAR_1);
   }

   continue;
  }


  *VAR_8 = VAR_14;
  return (0);
 }


 if (VAR_10 > 0 && VAR_2) {
  FUNC_0("sprom parsing failed with %zu CRC errors\n",
      VAR_10);
 }

 return (VAR_3);
}

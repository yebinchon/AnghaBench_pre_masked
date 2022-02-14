
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rs6000_framedata {int saved_gpr; int saved_fpr; int saved_vr; int saved_ev; int alloca_reg; int frameless; int nosavedpc; long fpr_offset; long gpr_offset; unsigned long offset; long lr_offset; long cr_offset; long vrsave_offset; long vr_offset; long ev_offset; } ;
struct gdbarch_tdep {int ppc_gp0_regnum; } ;
struct bfd_arch_info {scalar_t__ mach; } ;
struct TYPE_2__ {int name; } ;
typedef scalar_t__ CORE_ADDR ;


 int FUNC_0 (unsigned long) ;
 long FUNC_1 (unsigned long) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_2 (char*,int) ;
 size_t FUNC_3 (scalar_t__) ;
 struct bfd_arch_info* FUNC_4 (int ) ;
 struct gdbarch_tdep* FUNC_5 (int ) ;
 int FUNC_6 () ;
 int VAR_2 ;
 int FUNC_7 (struct rs6000_framedata*,int ,int) ;
 TYPE_1__* VAR_3 ;
 unsigned long FUNC_8 (scalar_t__,int) ;
 scalar_t__ FUNC_9 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_10 (int ,int ) ;
 scalar_t__ FUNC_11 (scalar_t__,char*,int) ;
 size_t VAR_4 ;

__attribute__((used)) static CORE_ADDR
FUNC_12 (CORE_ADDR VAR_5, CORE_ADDR VAR_6, struct rs6000_framedata *VAR_7)
{
  CORE_ADDR VAR_8 = VAR_5;
  CORE_ADDR VAR_9 = VAR_5;
  CORE_ADDR VAR_10 = 0;
  char VAR_11[4];
  unsigned long VAR_12;
  long VAR_13 = 0;
  long VAR_14 = 0;
  int VAR_15 = -1;
  int VAR_16 = -1;
  int VAR_17 = -1;
  int VAR_18 = -1;
  long VAR_19 = 0;
  int VAR_20 = -1;
  int VAR_21;
  int VAR_22 = 0;
  int VAR_23 = 0;
  int VAR_24 = 1;
  int VAR_25 = 0;
  const struct bfd_arch_info *VAR_26 = FUNC_4 (VAR_1);
  struct gdbarch_tdep *VAR_27 = FUNC_5 (VAR_1);
  if (VAR_6 == 0)
    VAR_6 = FUNC_9 (VAR_5, VAR_6);

  FUNC_7 (VAR_7, 0, sizeof (struct rs6000_framedata));
  VAR_7->saved_gpr = -1;
  VAR_7->saved_fpr = -1;
  VAR_7->saved_vr = -1;
  VAR_7->saved_ev = -1;
  VAR_7->alloca_reg = -1;
  VAR_7->frameless = 1;
  VAR_7->nosavedpc = 1;

  for (;; VAR_5 += 4)
    {




      if (VAR_24)
 VAR_9 = VAR_5;


      if (VAR_6 != 0 && VAR_5 >= VAR_6)
 break;

      VAR_24 = 1;


      if (FUNC_11 (VAR_5, VAR_11, 4))
 break;
      VAR_12 = FUNC_2 (VAR_11, 4);

      if ((VAR_12 & 0xfc1fffff) == 0x7c0802a6)
 {
   VAR_15 = (VAR_12 & 0x03e00000);
   continue;

 }
      else if ((VAR_12 & 0xfc1fffff) == 0x7c000026)
 {
   VAR_16 = (VAR_12 & 0x03e00000);
   continue;

 }
      else if ((VAR_12 & 0xfc1f0000) == 0xd8010000)
 {
   VAR_21 = FUNC_0 (VAR_12);
   if (VAR_7->saved_fpr == -1 || VAR_7->saved_fpr > VAR_21)
     {
       VAR_7->saved_fpr = VAR_21;
       VAR_7->fpr_offset = FUNC_1 (VAR_12) + VAR_13;
     }
   continue;

 }
      else if (((VAR_12 & 0xfc1f0000) == 0xbc010000) ||
        (((VAR_12 & 0xfc1f0000) == 0x90010000 ||
   (VAR_12 & 0xfc1f0003) == 0xf8010000) &&
  (VAR_12 & 0x03e00000) >= 0x01a00000))
 {

   VAR_21 = FUNC_0 (VAR_12);
   if (VAR_7->saved_gpr == -1 || VAR_7->saved_gpr > VAR_21)
     {
       VAR_7->saved_gpr = VAR_21;
       if ((VAR_12 & 0xfc1f0003) == 0xf8010000)
  VAR_12 &= ~3UL;
       VAR_7->gpr_offset = FUNC_1 (VAR_12) + VAR_13;
     }
   continue;

 }
      else if ((VAR_12 & 0xffff0000) == 0x60000000)
        {




   VAR_24 = 0;
   continue;

 }
      else if ((VAR_12 & 0xffff0000) == 0x3c000000)
 {

   VAR_7->offset = (VAR_12 & 0x0000ffff) << 16;
   VAR_7->frameless = 0;
   continue;

 }
      else if ((VAR_12 & 0xffff0000) == 0x60000000)
 {

   VAR_7->offset |= (VAR_12 & 0x0000ffff);
   VAR_7->frameless = 0;
   continue;

 }
      else if (VAR_15 != -1 &&

        (((VAR_12 & 0xffff0000) == (VAR_15 | 0xf8010000)) ||

  ((VAR_12 & 0xffff0000) == (VAR_15 | 0x90010000)) ||

  ((VAR_12 & 0xffff0000) == (VAR_15 | 0x94010000))))
 {
   VAR_7->lr_offset = VAR_13;
   VAR_7->nosavedpc = 0;
   VAR_15 = 0;
   if ((VAR_12 & 0xfc000003) == 0xf8000000 ||
       (VAR_12 & 0xfc000000) == 0x90000000)
     {

       VAR_7->lr_offset += FUNC_1 (VAR_12);
     }
   continue;

 }
      else if (VAR_16 != -1 &&

        (((VAR_12 & 0xffff0000) == (VAR_16 | 0xf8010000)) ||

  ((VAR_12 & 0xffff0000) == (VAR_16 | 0x90010000)) ||

  ((VAR_12 & 0xffff0000) == (VAR_16 | 0x94010000))))
 {
   VAR_7->cr_offset = VAR_13;
   VAR_16 = 0;
   if ((VAR_12 & 0xfc000003) == 0xf8000000 ||
       (VAR_12 & 0xfc000000) == 0x90000000)
     {

       VAR_7->cr_offset += FUNC_1 (VAR_12);
     }
   continue;

 }
      else if (VAR_12 == 0x48000005)
 {

   continue;

 }
      else if (VAR_12 == 0x48000004)
 {
   break;

 }
      else if ((VAR_12 & 0xffff0000) == 0x3fc00000 ||

        (VAR_12 & 0xffff0000) == 0x3bde0000)
 {
   continue;

 }
      else if ((VAR_12 & 0xfc000001) == 0x48000001)
 {


   VAR_7->frameless = 0;


   if ((VAR_5 - VAR_8) > 8)
     break;

   VAR_12 = FUNC_8 (VAR_5 + 4, 4);






   if (VAR_12 == 0x4def7b82 || VAR_12 == 0)
     break;

   continue;

 }

      else if ((VAR_12 & 0xfc1f0000) == 0x94010000)
 {
   VAR_7->frameless = 0;
   VAR_7->offset = FUNC_1 (VAR_12);
   VAR_13 = VAR_7->offset;
   continue;
 }
      else if ((VAR_12 & 0xfc1f016a) == 0x7c01016e)
 {

   VAR_7->frameless = 0;
   VAR_13 = VAR_7->offset;
   continue;
 }
      else if ((VAR_12 & 0xfc1f0003) == 0xf8010001)
 {
   VAR_7->frameless = 0;
   VAR_7->offset = FUNC_1 (VAR_12 & ~3UL);
   VAR_13 = VAR_7->offset;
   continue;
 }
      else if ((VAR_12 & 0xfc1f016a) == 0x7c01016a)
 {

   VAR_7->frameless = 0;
   VAR_13 = VAR_7->offset;
   continue;
 }

      else if (((VAR_12 >> 22) == 0x20f ||
        (VAR_12 >> 22) == 0x3af)
        && !VAR_23)
 {
   VAR_23 = 1;
   continue;



  }
      else if ((VAR_12 & 0xfc0007fe) == 0x7c000378 &&
               (((VAR_12 >> 21) & 31) >= 3) &&
               (((VAR_12 >> 21) & 31) <= 10) &&
               ((long) ((VAR_12 >> 16) & 31) >= VAR_7->saved_gpr))
 {
   continue;


 }
      else if ((VAR_12 & 0xfc1f0003) == 0xf8010000 ||
        (VAR_12 & 0xfc1f0000) == 0xd8010000 ||
        (VAR_12 & 0xfc1f0000) == 0xfc010000)
 {
   continue;


 }
      else if (VAR_22 &&
        ((VAR_12 & 0xfc1f0000) == 0x901f0000 ||
  (VAR_12 & 0xfc1f0000) == 0xd81f0000 ||
  (VAR_12 & 0xfc1f0000) == 0xfc1f0000))
 {
   continue;


 }
      else if (VAR_12 == 0x603f0000
        || VAR_12 == 0x7c3f0b78)
 {
   VAR_7->frameless = 0;
   VAR_22 = 1;
   VAR_7->alloca_reg = (VAR_27->ppc_gp0_regnum + 31);
   continue;


 }
      else if ((VAR_12 & 0xfc1fffff) == 0x38010000)
 {
   VAR_7->frameless = 0;
   VAR_22 = 1;
   VAR_7->alloca_reg = (VAR_27->ppc_gp0_regnum
          + ((VAR_12 & ~0x38010000) >> 21));
   continue;
 }
      else if ((VAR_12 & 0xfc1fffff) == 0x7c0042a6)
 {
          VAR_20 = FUNC_0 (VAR_12);
   continue;
 }
      else if ((VAR_12 & 0xfc1fffff) == 0x7c0043a6)
        {
          continue;
        }




      else if ((VAR_12 & 0xfc1f0000) == 0x90010000)
        {
          if (VAR_20 == FUNC_0 (VAR_12))
     {
       VAR_7->vrsave_offset = FUNC_1 (VAR_12) + VAR_13;
       VAR_20 = -1;
     }
          continue;
        }


      else if (((VAR_12 & 0xfc000000) == 0x64000000)
        || ((VAR_12 & 0xfc000000) == 0x60000000))
 {
   continue;
 }





      else if ((VAR_12 & 0xffff0000) == 0x38000000
               || (VAR_12 & 0xffff0000) == 0x39c00000)
 {
   VAR_10 = VAR_5;
   VAR_14 = FUNC_1 (VAR_12);
 }


      else if ((VAR_12 & 0xfc1fffff) == 0x7c1f01ce)
        {
   if (VAR_5 == (VAR_10 + 4))
     {
       VAR_17 = FUNC_0 (VAR_12);



       if (VAR_7->saved_vr == -1 || VAR_7->saved_vr > VAR_17)
  {
    VAR_7->saved_vr = VAR_17;
    VAR_7->vr_offset = VAR_14 + VAR_13;
  }
       VAR_14 = -1;
       VAR_17 = -1;
       VAR_10 = 0;
     }
 }






      else if (VAR_26->mach == VAR_0
        && (VAR_12 & 0xfc1f07ff) == 0x101f0321)
 {
          if ((VAR_12 & 0x03e00000) >= 0x01a00000)
     {
              unsigned int VAR_28;
       VAR_18 = FUNC_0 (VAR_12);
              VAR_28 = (VAR_12 >> 11) & 0x1f;
       VAR_19 = VAR_28 * 8;



       if (VAR_7->saved_ev == -1 || VAR_7->saved_ev > VAR_18)
  {
    VAR_7->saved_ev = VAR_18;
    VAR_7->ev_offset = VAR_19 + VAR_13;
  }
     }
          continue;
        }


      else if (VAR_26->mach == VAR_0
        && (VAR_12 & 0xffe007ff) == 0x13e00320)
 {
          if (VAR_5 == (VAR_10 + 4))
            {
              VAR_18 = FUNC_0 (VAR_12);




       if (VAR_7->saved_ev == -1 || VAR_7->saved_ev > VAR_18)
  {
                  VAR_7->saved_ev = VAR_18;
                  VAR_7->ev_offset = VAR_14 + VAR_13;
  }
       VAR_14 = -1;
       VAR_18 = -1;
       VAR_10 = 0;
            }
          continue;
        }


      else if (VAR_26->mach == VAR_0
        && (VAR_12 & 0xffe007ff) == 0x13e00321)
        {


   VAR_18 = FUNC_0 (VAR_12);
          VAR_19 = ((VAR_12 >> 11) & 0x1f) * 8;



   if (VAR_7->saved_ev == -1 || VAR_7->saved_ev > VAR_18)
     {
       VAR_7->saved_ev = VAR_18;
       VAR_7->ev_offset = VAR_19 + VAR_13;
     }

   continue;
       }



      else if (VAR_26->mach == VAR_0
        && (VAR_12 & 0xfc1fffff) == 0x101f0320)
 {
          if (VAR_5 == (VAR_10 + 4))
            {
              if ((VAR_12 & 0x03e00000) >= 0x01a00000)
  {
    VAR_18 = FUNC_0 (VAR_12);





    if (VAR_7->saved_ev == -1 || VAR_7->saved_ev > VAR_18)
      {
        VAR_7->saved_ev = VAR_18;
        VAR_7->ev_offset = VAR_14 + VAR_13;
      }
    VAR_18 = -1;
  }
       VAR_14 = -1;
       VAR_10 = 0;
       continue;
            }
 }


      else
 {




   if (VAR_7->frameless == 0
       && (VAR_15 == -1 || VAR_7->nosavedpc == 0))
     break;

   if (VAR_12 == 0x4e800020
       || VAR_12 == 0x4e800420)


     break;
   if ((VAR_12 & 0xf4000000) == 0x40000000)

     break;

   if (VAR_25++ > VAR_2)


     break;


   VAR_24 = 0;
   continue;
 }
    }
  VAR_7->offset = -VAR_7->offset;
  return VAR_9;
}

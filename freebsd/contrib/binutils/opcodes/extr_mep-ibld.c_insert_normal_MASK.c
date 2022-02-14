
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ min_insn_bitsize; scalar_t__ base_insn_bitsize; } ;
typedef unsigned long* CGEN_INSN_BYTES_PTR ;
typedef TYPE_1__* CGEN_CPU_DESC ;


 scalar_t__ FUNC_0 (unsigned int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 char* FUNC_1 (char*) ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,long,unsigned int,unsigned int,unsigned int,unsigned char*) ;
 int FUNC_5 (char*,char*,long,long,...) ;

__attribute__((used)) static const char *
FUNC_6 (CGEN_CPU_DESC VAR_3,
        long VAR_4,
        unsigned int VAR_5,
        unsigned int VAR_6,
        unsigned int VAR_7,
        unsigned int VAR_8,
        unsigned int VAR_9,
        unsigned int VAR_10,
        CGEN_INSN_BYTES_PTR VAR_11)
{
  static char VAR_12[100];

  unsigned long VAR_13 = (((1L << (VAR_8 - 1)) - 1) << 1) | 1;


  if (VAR_8 == 0)
    return ((void*)0);

  if (VAR_9 > 32)
    FUNC_2 ();



  if (VAR_3->min_insn_bitsize < VAR_3->base_insn_bitsize)
    {
      if (VAR_6 == 0
   && VAR_9 > VAR_10)
 VAR_9 = VAR_10;
    }


  if (FUNC_0 (VAR_5, VAR_1))
    {
      long VAR_14 = - (1L << (VAR_8 - 1));
      unsigned long VAR_15 = VAR_13;

      if ((VAR_4 > 0 && (unsigned long) VAR_4 > VAR_15)
   || VAR_4 < VAR_14)
 {

   FUNC_5 (VAR_12,
     FUNC_1("operand out of range (%ld not between %ld and %lu)"),
     VAR_4, VAR_14, VAR_15);
   return VAR_12;
 }
    }
  else if (! FUNC_0 (VAR_5, VAR_0))
    {
      unsigned long VAR_16 = VAR_13;
      unsigned long VAR_17 = (unsigned long) VAR_4;





      if (sizeof (unsigned long) > 4 && ((VAR_4 >> 32) == -1))
 VAR_17 &= 0xFFFFFFFF;

      if (VAR_17 > VAR_16)
 {

   FUNC_5 (VAR_12,
     FUNC_1("operand out of range (0x%lx not between 0 and 0x%lx)"),
     VAR_17, VAR_16);
   return VAR_12;
 }
    }
  else
    {
      if (! FUNC_3 (VAR_3))
 {
   long VAR_18 = - (1L << (VAR_8 - 1));
   long VAR_19 = (1L << (VAR_8 - 1)) - 1;

   if (VAR_4 < VAR_18 || VAR_4 > VAR_19)
     {
       FUNC_5

  (VAR_12, FUNC_1("operand out of range (%ld not between %ld and %ld)"),
   VAR_4, VAR_18, VAR_19);
       return VAR_12;
     }
 }
    }
  {
    unsigned char *VAR_20 = (unsigned char *) VAR_11 + VAR_6 / 8;

    FUNC_4 (VAR_3, VAR_4, VAR_7, VAR_8, VAR_9, VAR_20);
  }



  return ((void*)0);
}

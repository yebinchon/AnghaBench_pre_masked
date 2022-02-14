
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ _Unwind_Word ;
typedef scalar_t__ _Unwind_Sword ;
typedef int _Unwind_Ptr ;
typedef int _Unwind_Internal_Ptr ;



 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 int FUNC_0 () ;
 unsigned char* FUNC_1 (unsigned char const*,scalar_t__*) ;
 unsigned char* FUNC_2 (unsigned char const*,scalar_t__*) ;

__attribute__((used)) static const unsigned char *
FUNC_3 (unsigned char VAR_3, _Unwind_Ptr VAR_4,
         const unsigned char *VAR_5, _Unwind_Ptr *VAR_6)
{
  union unaligned
    {
      void *ptr;
      unsigned u2 __attribute__ ((mode (HI)));
      unsigned u4 __attribute__ ((mode (SI)));
      unsigned u8 __attribute__ ((mode (DI)));
      signed s2 __attribute__ ((mode (HI)));
      signed s4 __attribute__ ((mode (SI)));
      signed s8 __attribute__ ((mode (DI)));
    } __attribute__((__packed__));

  const union unaligned *VAR_7 = (const union unaligned *) VAR_5;
  _Unwind_Internal_Ptr VAR_8;

  if (VAR_3 == VAR_0)
    {
      _Unwind_Internal_Ptr VAR_9 = (_Unwind_Internal_Ptr) VAR_5;
      VAR_9 = (VAR_9 + sizeof (void *) - 1) & - sizeof(void *);
      VAR_8 = *(_Unwind_Internal_Ptr *) VAR_9;
      VAR_5 = (const unsigned char *) (_Unwind_Internal_Ptr) (VAR_9 + sizeof (void *));
    }
  else
    {
      switch (VAR_3 & 0x0f)
 {
 case 136:
   VAR_8 = (_Unwind_Internal_Ptr) VAR_7->ptr;
   VAR_5 += sizeof (void *);
   break;

 case 128:
   {
     _Unwind_Word VAR_10;
     VAR_5 = FUNC_2 (VAR_5, &VAR_10);
     VAR_8 = (_Unwind_Internal_Ptr) VAR_10;
   }
   break;

 case 132:
   {
     _Unwind_Sword VAR_11;
     VAR_5 = FUNC_1 (VAR_5, &VAR_11);
     VAR_8 = (_Unwind_Internal_Ptr) VAR_11;
   }
   break;

 case 131:
   VAR_8 = VAR_7->u2;
   VAR_5 += 2;
   break;
 case 130:
   VAR_8 = VAR_7->u4;
   VAR_5 += 4;
   break;
 case 129:
   VAR_8 = VAR_7->u8;
   VAR_5 += 8;
   break;

 case 135:
   VAR_8 = VAR_7->s2;
   VAR_5 += 2;
   break;
 case 134:
   VAR_8 = VAR_7->s4;
   VAR_5 += 4;
   break;
 case 133:
   VAR_8 = VAR_7->s8;
   VAR_5 += 8;
   break;

 default:
   FUNC_0 ();
 }

      if (VAR_8 != 0)
 {
   VAR_8 += ((VAR_3 & 0x70) == VAR_2
       ? (_Unwind_Internal_Ptr) VAR_7 : VAR_4);
   if (VAR_3 & VAR_1)
     VAR_8 = *(_Unwind_Internal_Ptr *) VAR_8;
 }
    }

  *VAR_6 = VAR_8;
  return VAR_5;
}

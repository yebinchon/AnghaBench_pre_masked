
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee_info {int const* pend; } ;
typedef int ieee_record_enum_type ;
typedef int bfd_vma ;
typedef int bfd_byte ;
typedef int bfd_boolean ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int VAR_2 ;
 int FUNC_1 (struct ieee_info*,int const*,int ) ;
 int FUNC_2 (struct ieee_info*,int const**,unsigned long) ;
 int FUNC_3 (struct ieee_info*,int const**,unsigned long) ;
 int FUNC_4 (struct ieee_info*,int const**) ;
 int FUNC_5 (struct ieee_info*,int const**,int*) ;
 int FUNC_6 (struct ieee_info*,int const**,char const**,unsigned long*) ;

__attribute__((used)) static bfd_boolean
FUNC_7 (struct ieee_info *VAR_3, const bfd_byte **VAR_4,
      unsigned long VAR_5)
{
  const bfd_byte *VAR_6;
  bfd_vma VAR_7;

  VAR_6 = *VAR_4;


  if (! FUNC_5 (VAR_3, VAR_4, &VAR_7))
    return VAR_0;
  --VAR_5;

  switch (VAR_7)
    {
    default:
      FUNC_1 (VAR_3, VAR_6, FUNC_0("unrecognized C++ misc record"));
      return VAR_0;

    case 'T':
      if (! FUNC_2 (VAR_3, VAR_4, VAR_5))
 return VAR_0;
      break;

    case 'M':
      {
 bfd_vma VAR_8;
 const char *VAR_9;
 unsigned long VAR_10;





 if (! FUNC_5 (VAR_3, VAR_4, &VAR_8))
   return VAR_0;
 if (*VAR_4 < VAR_3->pend
     && (ieee_record_enum_type) **VAR_4 == VAR_2)
   {
     if (! FUNC_6 (VAR_3, VAR_4, &VAR_9, &VAR_10))
       return VAR_0;
   }





      }
      break;

    case 'B':
      if (! FUNC_3 (VAR_3, VAR_4, VAR_5))
 return VAR_0;
      break;

    case 'z':
      {
 const char *VAR_11, *VAR_12, *VAR_13;
 unsigned long VAR_14, VAR_15, VAR_16;
 bfd_vma VAR_17;



 if (! FUNC_6 (VAR_3, VAR_4, &VAR_11, &VAR_14)
     || ! FUNC_6 (VAR_3, VAR_4, &VAR_12, &VAR_15)
     || ! FUNC_6 (VAR_3, VAR_4, &VAR_13, &VAR_16)
     || ! FUNC_5 (VAR_3, VAR_4, &VAR_17))
   return VAR_0;


      }
      break;

    case 'R':
      if (! FUNC_4 (VAR_3, VAR_4))
 return VAR_0;
      break;
    }

  return VAR_1;
}

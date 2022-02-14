
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee_info {int const* pend; } ;
typedef scalar_t__ ieee_record_enum_type ;
typedef int bfd_vma ;
typedef int bfd_byte ;
typedef int bfd_boolean ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct ieee_info*) ;
 int FUNC_2 (struct ieee_info*,int const*,int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static bfd_boolean
FUNC_3 (struct ieee_info *VAR_5, const bfd_byte **VAR_6,
      bfd_vma *VAR_7, bfd_boolean *VAR_8)
{
  ieee_record_enum_type VAR_9;

  if (*VAR_6 >= VAR_5->pend)
    {
      if (VAR_8 != ((void*)0))
 {
   *VAR_8 = VAR_0;
   return VAR_1;
 }
      FUNC_1 (VAR_5);
      return VAR_0;
    }

  VAR_9 = (ieee_record_enum_type) **VAR_6;
  ++*VAR_6;

  if (VAR_9 <= VAR_2)
    {
      *VAR_7 = (bfd_vma) VAR_9;
      if (VAR_8 != ((void*)0))
 *VAR_8 = VAR_1;
      return VAR_1;
    }

  if (VAR_9 >= VAR_4 && VAR_9 <= VAR_3)
    {
      unsigned int VAR_10;

      VAR_10 = (int) VAR_9 - (int) VAR_4;
      if (*VAR_6 + VAR_10 - 1 >= VAR_5->pend)
 {
   FUNC_1 (VAR_5);
   return VAR_0;
 }

      *VAR_7 = 0;
      for (; VAR_10 > 0; VAR_10--)
 {
   *VAR_7 <<= 8;
   *VAR_7 += **VAR_6;
   ++*VAR_6;
 }

      if (VAR_8 != ((void*)0))
 *VAR_8 = VAR_1;

      return VAR_1;
    }

  if (VAR_8 != ((void*)0))
    {
      --*VAR_6;
      *VAR_8 = VAR_0;
      return VAR_1;
    }

  FUNC_2 (VAR_5, *VAR_6 - 1, FUNC_0("invalid number"));
  return VAR_0;
}

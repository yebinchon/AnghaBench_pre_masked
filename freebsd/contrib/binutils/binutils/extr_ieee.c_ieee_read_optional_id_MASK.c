
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee_info {int const* pend; } ;
typedef scalar_t__ ieee_record_enum_type ;
typedef int bfd_byte ;
typedef int bfd_boolean ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct ieee_info*) ;
 int FUNC_2 (struct ieee_info*,int const*,int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static bfd_boolean
FUNC_3 (struct ieee_info *VAR_4, const bfd_byte **VAR_5,
         const char **VAR_6, unsigned long *VAR_7,
         bfd_boolean *VAR_8)
{
  bfd_byte VAR_9;
  unsigned long VAR_10;

  if (*VAR_5 >= VAR_4->pend)
    {
      FUNC_1 (VAR_4);
      return VAR_0;
    }

  VAR_9 = **VAR_5;
  ++*VAR_5;

  if (VAR_9 <= 0x7f)
    VAR_10 = VAR_9;
  else if ((ieee_record_enum_type) VAR_9 == VAR_2)
    {
      VAR_10 = **VAR_5;
      ++*VAR_5;
    }
  else if ((ieee_record_enum_type) VAR_9 == VAR_3)
    {
      VAR_10 = (**VAR_5 << 8) + (*VAR_5)[1];
      *VAR_5 += 2;
    }
  else
    {
      if (VAR_8 != ((void*)0))
 {
   --*VAR_5;
   *VAR_8 = VAR_0;
   return VAR_1;
 }
      FUNC_2 (VAR_4, *VAR_5 - 1, FUNC_0("invalid string length"));
      return VAR_0;
    }

  if ((unsigned long) (VAR_4->pend - *VAR_5) < VAR_10)
    {
      FUNC_1 (VAR_4);
      return VAR_0;
    }

  *VAR_6 = (const char *) *VAR_5;
  *VAR_7 = VAR_10;
  *VAR_5 += VAR_10;

  if (VAR_8 != ((void*)0))
    *VAR_8 = VAR_1;

  return VAR_1;
}

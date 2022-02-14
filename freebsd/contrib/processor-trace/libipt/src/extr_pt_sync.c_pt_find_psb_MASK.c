
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct pt_config {scalar_t__* begin; scalar_t__* end; } ;


 scalar_t__ const VAR_0 ;
 scalar_t__ const VAR_1 ;
 int FUNC_0 (scalar_t__ const*,struct pt_config const*) ;
 scalar_t__ const VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static const uint8_t *FUNC_1(const uint8_t *VAR_5,
      const struct pt_config *VAR_6)
{
 const uint8_t *VAR_7, *VAR_8;
 int VAR_9;

 if (!VAR_5 || !VAR_6)
  return ((void*)0);

 VAR_7 = VAR_6->begin;
 VAR_8 = VAR_6->end;






 if (*VAR_5 != VAR_2)
  VAR_5++;

 for (; (VAR_5 + 1) < VAR_8; VAR_5 += 2) {
  uint8_t VAR_10, VAR_11;

  VAR_10 = VAR_5[0];
  VAR_11 = VAR_5[1];

  if (VAR_10 != VAR_2)
   break;

  if (VAR_11 != VAR_3)
   break;
 }




 VAR_5 -= VAR_4;


 if (VAR_5 < VAR_7)
  return ((void*)0);


 if (VAR_5[0] != VAR_1 || VAR_5[1] != VAR_0)
  return ((void*)0);

 VAR_9 = FUNC_0(VAR_5, VAR_6);
 if (VAR_9 < 0)
  return ((void*)0);

 return VAR_5;
}

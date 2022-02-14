
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
struct pt_config {int * end; int * begin; } ;


 int * FUNC_0 (int const*,int) ;
 scalar_t__* VAR_0 ;
 int * FUNC_1 (int const*,struct pt_config const*) ;
 int FUNC_2 (int const*,int const*,int const*) ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_3(const uint8_t **VAR_3, const uint8_t *VAR_4,
      const struct pt_config *VAR_5)
{
 const uint8_t *VAR_6, *VAR_7, *VAR_8;

 if (!VAR_3 || !VAR_4 || !VAR_5)
  return -VAR_2;

 VAR_8 = VAR_4;
 VAR_6 = VAR_5->begin;
 VAR_7 = VAR_5->end;

 if (!FUNC_2(VAR_4, VAR_6, VAR_7))
  return -VAR_2;


 VAR_4 = FUNC_0(VAR_4, sizeof(*VAR_0));


 for (;;) {
  const uint8_t *VAR_9 = VAR_4;
  uint64_t VAR_10;

  VAR_4 += sizeof(uint64_t);
  if (VAR_7 < VAR_4)
   return -VAR_1;

  VAR_10 = * (const uint64_t *) VAR_9;

  if ((VAR_10 != VAR_0[0]) && (VAR_10 != VAR_0[1]))
   continue;


  VAR_9 = FUNC_1(VAR_4, VAR_5);
  if (!VAR_9)
   continue;




  if (VAR_9 < VAR_8)
   continue;

  *VAR_3 = VAR_9;
  return 0;
 }
}

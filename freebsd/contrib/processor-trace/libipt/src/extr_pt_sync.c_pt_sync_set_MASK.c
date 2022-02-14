
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct pt_config {scalar_t__* begin; scalar_t__* end; } ;


 scalar_t__ const VAR_0 ;
 scalar_t__ const VAR_1 ;
 int FUNC_0 (scalar_t__ const*,struct pt_config const*) ;
 int FUNC_1 (scalar_t__ const*,scalar_t__ const*,scalar_t__ const*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

int FUNC_2(const uint8_t **VAR_5, const uint8_t *VAR_6,
  const struct pt_config *VAR_7)
{
 const uint8_t *VAR_8, *VAR_9;
 int VAR_10;

 if (!VAR_5 || !VAR_6 || !VAR_7)
  return -VAR_3;

 VAR_8 = VAR_7->begin;
 VAR_9 = VAR_7->end;

 if (!FUNC_1(VAR_6, VAR_8, VAR_9))
  return -VAR_2;

 if (VAR_9 < VAR_6 + 2)
  return -VAR_2;


 if (VAR_6[0] != VAR_1 || VAR_6[1] != VAR_0)
  return -VAR_4;

 VAR_10 = FUNC_0(VAR_6, VAR_7);
 if (VAR_10 < 0)
  return VAR_10;

 *VAR_5 = VAR_6;

 return 0;
}

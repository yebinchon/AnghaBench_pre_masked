
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct devdesc {int d_unit; } ;
typedef int daddr_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int,int,int *,int ) ;
 int FUNC_1 (int ,char*,size_t) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int
FUNC_3(void *VAR_1, int VAR_2, daddr_t VAR_3, size_t VAR_4,
    char *VAR_5, size_t *VAR_6)
{
 struct devdesc *VAR_7 = VAR_1;
 daddr_t VAR_8;
 int VAR_9;
 uint64_t VAR_10;
 uint32_t VAR_11, VAR_12;

 VAR_8 = VAR_3 * 512;

 VAR_11 = VAR_8 & 0xffffffff;
 VAR_12 = (VAR_8 >> 32) & 0xffffffff;
 if (FUNC_0(VAR_7->d_unit, VAR_12, VAR_11, &VAR_10, 0) < 0) {
  FUNC_2("Seek error\n");
  return (VAR_0);
 }
 VAR_9 = FUNC_1(VAR_7->d_unit, VAR_5, VAR_4);

 if (VAR_9 < 0)
  return (VAR_0);

 *VAR_6 = VAR_9;
 return (0);
}

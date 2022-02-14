
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
struct readelf {int elf; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 char* FUNC_1 (int ,scalar_t__,int ) ;

__attribute__((used)) static const char *
FUNC_2(struct readelf *VAR_1, uint32_t VAR_2, uint64_t VAR_3)
{
 const char *VAR_4;

 if (VAR_2 == VAR_0)
  VAR_4 = "ERROR";
 else if ((VAR_4 = FUNC_1(VAR_1->elf, VAR_2, VAR_3)) == ((void*)0)) {
  (void) FUNC_0();
  VAR_4 = "ERROR";
 }

 return (VAR_4);
}

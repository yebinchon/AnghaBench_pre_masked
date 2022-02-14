
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int vmci_id ;
typedef int uint8_t ;
typedef int id ;



__attribute__((used)) static inline int
FUNC_0(vmci_id VAR_0, unsigned VAR_1)
{
 unsigned VAR_2;
 int VAR_3 = 5381;

 for (VAR_2 = 0; VAR_2 < sizeof(VAR_0); VAR_2++)
  VAR_3 = ((VAR_3 << 5) + VAR_3) + (uint8_t)(VAR_0 >> (VAR_2 * 8));

 return (VAR_3 & (VAR_1 - 1));
}

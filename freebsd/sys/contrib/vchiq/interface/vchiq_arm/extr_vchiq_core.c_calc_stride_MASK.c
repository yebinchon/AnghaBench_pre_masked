
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VCHIQ_HEADER_T ;



__attribute__((used)) static inline unsigned int
FUNC_0(unsigned int VAR_0)
{

 VAR_0 += sizeof(VCHIQ_HEADER_T);


 return (VAR_0 + sizeof(VCHIQ_HEADER_T) - 1) & ~(sizeof(VCHIQ_HEADER_T)
  - 1);
}

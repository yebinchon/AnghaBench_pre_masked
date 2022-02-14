
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct nm_vnet_hdr {scalar_t__ gso_type; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static inline int
FUNC_0(struct nm_vnet_hdr *VAR_7)
{
 uint8_t VAR_8 = VAR_7->gso_type & ~VAR_2;

 return (
  (VAR_8 != VAR_3 &&
   VAR_8 != VAR_4 &&
   VAR_8 != VAR_6 &&
   VAR_8 != VAR_5)
  ||
   (VAR_7->flags & ~(VAR_1
          | VAR_0))
        );
}

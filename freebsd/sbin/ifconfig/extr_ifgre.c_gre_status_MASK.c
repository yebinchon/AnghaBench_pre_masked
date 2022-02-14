
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef void* caddr_t ;
struct TYPE_3__ {void* ifr_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__ VAR_4 ;
 scalar_t__ FUNC_0 (int,int ,TYPE_1__*) ;
 int FUNC_1 (char*,scalar_t__,int ) ;
 int FUNC_2 (char*,scalar_t__,...) ;
 int FUNC_3 (char) ;

__attribute__((used)) static void
FUNC_4(int VAR_5)
{
 uint32_t VAR_6, VAR_7;

 VAR_6 = 0;
 VAR_4.ifr_data = (caddr_t)&VAR_6;
 if (FUNC_0(VAR_5, VAR_1, &VAR_4) == 0)
  if (VAR_6 != 0)
   FUNC_2("\tgrekey: 0x%x (%u)\n", VAR_6, VAR_6);
 VAR_6 = 0;
 if (FUNC_0(VAR_5, VAR_2, &VAR_4) != 0 || VAR_6 == 0)
  return;

 VAR_7 = 0;
 VAR_4.ifr_data = (caddr_t)&VAR_7;
 if (FUNC_0(VAR_5, VAR_3, &VAR_4) == 0 && VAR_7 != 0)
  FUNC_2("\tudpport: %u\n", VAR_7);
 FUNC_1("\toptions", VAR_6, VAR_0);
 FUNC_3('\n');
}

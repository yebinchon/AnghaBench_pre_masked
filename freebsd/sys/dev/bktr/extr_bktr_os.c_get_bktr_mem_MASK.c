
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_offset_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (unsigned int,int ,int ,int ,int,int,int ) ;
 int FUNC_1 (char*,int,unsigned int) ;

vm_offset_t
FUNC_2( int VAR_3, unsigned VAR_4 )
{
 vm_offset_t VAR_5 = 0;

 VAR_5 = (vm_offset_t)FUNC_0(VAR_4, VAR_0, VAR_1, 0,
     0xffffffff, 1<<24, 0);
 if (VAR_5 == 0)
  VAR_5 = (vm_offset_t)FUNC_0(VAR_4, VAR_0, VAR_1, 0,
      0xffffffff, VAR_2, 0);
 if (VAR_5 == 0) {
  FUNC_1("bktr%d: Unable to allocate %d bytes of memory.\n",
   VAR_3, VAR_4);
 }

 return( VAR_5 );
}

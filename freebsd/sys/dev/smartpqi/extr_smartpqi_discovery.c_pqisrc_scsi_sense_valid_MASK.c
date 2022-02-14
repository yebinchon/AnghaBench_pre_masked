
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sense_header_scsi {int response_code; } ;
typedef int boolean_t ;


 int FUNC_0 (char*) ;

__attribute__((used)) static inline boolean_t FUNC_1(const struct sense_header_scsi *VAR_0)
{
 FUNC_0("IN\n");

 if (!VAR_0)
  return 0;

 FUNC_0("OUT\n");

 return (VAR_0->response_code & 0x70) == 0x70;
}

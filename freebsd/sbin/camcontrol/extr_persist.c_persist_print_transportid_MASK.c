
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct scsi_transportid_header {int dummy; } ;
struct sbuf {int dummy; } ;


 int FUNC_0 (int ,char*,...) ;
 char* FUNC_1 (struct sbuf*) ;
 int FUNC_2 (struct sbuf*) ;
 int FUNC_3 (struct sbuf*) ;
 struct sbuf* FUNC_4 () ;
 int FUNC_5 (struct sbuf*,struct scsi_transportid_header*,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_6(uint8_t *VAR_2, uint32_t VAR_3)
{
 struct sbuf *VAR_4;

 VAR_4 = FUNC_4();
 if (VAR_4 == ((void*)0))
  FUNC_0(VAR_0, "Unable to allocate sbuf\n");

 FUNC_5(VAR_4, (struct scsi_transportid_header *)VAR_2, VAR_3);

 FUNC_3(VAR_4);

 FUNC_0(VAR_1, "%s\n", FUNC_1(VAR_4));

 FUNC_2(VAR_4);
}

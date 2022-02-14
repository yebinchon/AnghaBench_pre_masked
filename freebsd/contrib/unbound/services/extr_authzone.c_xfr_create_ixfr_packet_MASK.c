
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct query_info {scalar_t__ qtype; int qclass; int qname_len; int qname; } ;
struct auth_xfer {int have_zone; int dclass; TYPE_1__* task_transfer; int namelen; int name; int serial; } ;
struct auth_master {int ixfr; } ;
typedef int sldns_buffer ;
typedef int qinfo ;
struct TYPE_2__ {int on_ixfr; scalar_t__ ixfr_fail; scalar_t__ on_ixfr_is_axfr; scalar_t__ incoming_xfr_serial; scalar_t__ rr_scan_num; scalar_t__ got_xfr_serial; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct query_info*,int ,int) ;
 int FUNC_1 (int *,struct query_info*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 size_t FUNC_4 (int *) ;
 int FUNC_5 (int *,size_t) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int ,int) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,int) ;

__attribute__((used)) static void
FUNC_10(struct auth_xfer* VAR_4, sldns_buffer* VAR_5, uint16_t VAR_6,
 struct auth_master* VAR_7)
{
 struct query_info VAR_8;
 uint32_t VAR_9;
 int VAR_10;
 VAR_10 = VAR_4->have_zone;
 VAR_9 = VAR_4->serial;

 FUNC_0(&VAR_8, 0, sizeof(VAR_8));
 VAR_8.qname = VAR_4->name;
 VAR_8.qname_len = VAR_4->namelen;
 VAR_4->task_transfer->got_xfr_serial = 0;
 VAR_4->task_transfer->rr_scan_num = 0;
 VAR_4->task_transfer->incoming_xfr_serial = 0;
 VAR_4->task_transfer->on_ixfr_is_axfr = 0;
 VAR_4->task_transfer->on_ixfr = 1;
 VAR_8.qtype = VAR_2;
 if(!VAR_10 || VAR_4->task_transfer->ixfr_fail || !VAR_7->ixfr) {
  VAR_8.qtype = VAR_1;
  VAR_4->task_transfer->ixfr_fail = 0;
  VAR_4->task_transfer->on_ixfr = 0;
 }

 VAR_8.qclass = VAR_4->dclass;
 FUNC_1(VAR_5, &VAR_8);
 FUNC_7(VAR_5, 0, VAR_6);


 if(VAR_8.qtype == VAR_2) {
  size_t VAR_11 = FUNC_4(VAR_5);
  FUNC_2(VAR_5);
  FUNC_5(VAR_5, VAR_11);

  FUNC_7(VAR_5, VAR_0, 1);

  FUNC_9(VAR_5, 0xC0);
  FUNC_9(VAR_5, 0x0C);
  FUNC_6(VAR_5, VAR_3);
  FUNC_6(VAR_5, VAR_8.qclass);
  FUNC_8(VAR_5, 0);
  FUNC_6(VAR_5, 22);
  FUNC_9(VAR_5, 0);
  FUNC_9(VAR_5, 0);
  FUNC_8(VAR_5, VAR_9);
  FUNC_8(VAR_5, 0);
  FUNC_8(VAR_5, 0);
  FUNC_8(VAR_5, 0);
  FUNC_8(VAR_5, 0);
  FUNC_3(VAR_5);
 }
}

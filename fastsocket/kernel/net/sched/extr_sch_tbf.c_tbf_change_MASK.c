
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ rate; int cell_log; } ;
struct tc_tbf_qopt {scalar_t__ buffer; scalar_t__ mtu; scalar_t__ limit; TYPE_2__ peakrate; TYPE_2__ rate; } ;
struct tbf_sched_data {scalar_t__ limit; scalar_t__ mtu; int max_size; scalar_t__ buffer; scalar_t__ tokens; scalar_t__ ptokens; int P_tab; int R_tab; struct Qdisc* qdisc; } ;
struct qdisc_rate_table {scalar_t__* data; } ;
struct nlattr {int dummy; } ;
struct TYPE_3__ {int qlen; } ;
struct Qdisc {TYPE_1__ q; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct Qdisc*) ;
 int FUNC_1 (struct Qdisc*) ;
 size_t VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 struct Qdisc* FUNC_2 (struct Qdisc*,int *,scalar_t__) ;
 struct tc_tbf_qopt* FUNC_3 (struct nlattr*) ;
 int FUNC_4 (struct nlattr**,int,struct nlattr*,int ) ;
 int FUNC_5 (struct Qdisc*) ;
 struct qdisc_rate_table* FUNC_6 (TYPE_2__*,struct nlattr*) ;
 struct tbf_sched_data* FUNC_7 (struct Qdisc*) ;
 int FUNC_8 (struct qdisc_rate_table*) ;
 int FUNC_9 (struct Qdisc*,int ) ;
 int FUNC_10 (struct Qdisc*) ;
 int FUNC_11 (struct Qdisc*) ;
 int FUNC_12 (int ,struct qdisc_rate_table*) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_13(struct Qdisc* VAR_6, struct nlattr *VAR_7)
{
 int VAR_8;
 struct tbf_sched_data *VAR_9 = FUNC_7(VAR_6);
 struct nlattr *VAR_10[VAR_2 + 1];
 struct tc_tbf_qopt *VAR_11;
 struct qdisc_rate_table *VAR_12 = ((void*)0);
 struct qdisc_rate_table *VAR_13 = ((void*)0);
 struct Qdisc *VAR_14 = ((void*)0);
 int VAR_15,VAR_16;

 VAR_8 = FUNC_4(VAR_10, VAR_2, VAR_7, VAR_5);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_8 = -VAR_0;
 if (VAR_10[VAR_1] == ((void*)0))
  goto done;

 VAR_11 = FUNC_3(VAR_10[VAR_1]);
 VAR_12 = FUNC_6(&VAR_11->rate, VAR_10[VAR_3]);
 if (VAR_12 == ((void*)0))
  goto done;

 if (VAR_11->peakrate.rate) {
  if (VAR_11->peakrate.rate > VAR_11->rate.rate)
   VAR_13 = FUNC_6(&VAR_11->peakrate, VAR_10[VAR_2]);
  if (VAR_13 == ((void*)0))
   goto done;
 }

 for (VAR_16 = 0; VAR_16 < 256; VAR_16++)
  if (VAR_12->data[VAR_16] > VAR_11->buffer) break;
 VAR_15 = (VAR_16 << VAR_11->rate.cell_log)-1;
 if (VAR_13) {
  int VAR_17;

  for (VAR_16 = 0; VAR_16 < 256; VAR_16++)
   if (VAR_13->data[VAR_16] > VAR_11->mtu) break;
  VAR_17 = (VAR_16 << VAR_11->peakrate.cell_log)-1;
  if (VAR_17 < VAR_15) VAR_15 = VAR_17;
 }
 if (VAR_15 < 0)
  goto done;

 if (VAR_11->limit > 0) {
  VAR_14 = FUNC_2(VAR_6, &VAR_4, VAR_11->limit);
  if (FUNC_0(VAR_14)) {
   VAR_8 = FUNC_1(VAR_14);
   goto done;
  }
 }

 FUNC_10(VAR_6);
 if (VAR_14) {
  FUNC_9(VAR_9->qdisc, VAR_9->qdisc->q.qlen);
  FUNC_5(VAR_9->qdisc);
  VAR_9->qdisc = VAR_14;
 }
 VAR_9->limit = VAR_11->limit;
 VAR_9->mtu = VAR_11->mtu;
 VAR_9->max_size = VAR_15;
 VAR_9->buffer = VAR_11->buffer;
 VAR_9->tokens = VAR_9->buffer;
 VAR_9->ptokens = VAR_9->mtu;

 FUNC_12(VAR_9->R_tab, VAR_12);
 FUNC_12(VAR_9->P_tab, VAR_13);

 FUNC_11(VAR_6);
 VAR_8 = 0;
done:
 if (VAR_12)
  FUNC_8(VAR_12);
 if (VAR_13)
  FUNC_8(VAR_13);
 return VAR_8;
}

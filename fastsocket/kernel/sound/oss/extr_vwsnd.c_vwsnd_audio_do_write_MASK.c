
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int flags; int swb_u_idx; int * swbuf; int queue; } ;
typedef TYPE_1__ vwsnd_port_t ;
struct TYPE_12__ {TYPE_1__ rport; TYPE_1__ wport; } ;
typedef TYPE_2__ vwsnd_dev_t ;
struct file {int f_mode; int f_flags; TYPE_2__* private_data; } ;
typedef int ssize_t ;
typedef int loff_t ;
struct TYPE_13__ {void* state; } ;


 int FUNC_0 (char*,struct file*,char const*,size_t,int *) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int ,TYPE_4__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (int ,char const*,size_t) ;
 int FUNC_4 (int *,int *) ;
 scalar_t__ FUNC_5 (int *,char const*,int) ;
 TYPE_4__* VAR_11 ;
 int FUNC_6 (TYPE_2__*,int ,int) ;
 int FUNC_7 (TYPE_2__*,TYPE_1__*,TYPE_1__*) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 () ;
 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (TYPE_4__*) ;
 int FUNC_12 (TYPE_1__*,int ) ;
 int VAR_12 ;

__attribute__((used)) static ssize_t FUNC_13(struct file *VAR_13,
        const char *VAR_14,
        size_t VAR_15,
        loff_t *VAR_16)
{
 vwsnd_dev_t *VAR_17 = VAR_13->private_data;
 vwsnd_port_t *VAR_18 = ((VAR_13->f_mode & VAR_6) ?
          &VAR_17->wport : ((void*)0));
 int VAR_19, VAR_20;

 FUNC_0("(file=0x%p, buffer=0x%p, count=%d, ppos=0x%p)\n",
       VAR_13, VAR_14, VAR_15, VAR_16);

 if (!VAR_18)
  return -VAR_3;

 if (VAR_18->swbuf == ((void*)0)) {
  vwsnd_port_t *VAR_21 = (VAR_13->f_mode & VAR_5) ?
   &VAR_17->rport : ((void*)0);
  VAR_19 = FUNC_7(VAR_17, VAR_21, VAR_18);
  if (VAR_19 < 0)
   return VAR_19;
 }
 if (!FUNC_3(VAR_10, VAR_14, VAR_15))
  return -VAR_2;
 VAR_19 = 0;
 while (VAR_15) {
  FUNC_2(VAR_12, VAR_11);
  FUNC_4(&VAR_18->queue, &VAR_12);
  while ((VAR_20 = FUNC_12(VAR_18, 0)) == 0) {
   FUNC_10(VAR_8);
   if (VAR_18->flags & VAR_0 ||
       VAR_13->f_flags & VAR_7) {
    VAR_11->state = VAR_9;
    FUNC_8(&VAR_18->queue, &VAR_12);
    return VAR_19 ? VAR_19 : -VAR_1;
   }
   FUNC_9();
   if (FUNC_11(VAR_11)) {
    VAR_11->state = VAR_9;
    FUNC_8(&VAR_18->queue, &VAR_12);
    return VAR_19 ? VAR_19 : -VAR_4;
   }
  }
  VAR_11->state = VAR_9;
  FUNC_8(&VAR_18->queue, &VAR_12);

  if (VAR_20 > VAR_15)
   VAR_20 = VAR_15;
  FUNC_1("nb = %d\n", VAR_20);
  if (FUNC_5(VAR_18->swbuf + VAR_18->swb_u_idx, VAR_14, VAR_20))
   return -VAR_2;
  FUNC_6(VAR_17, 0, VAR_20);
  VAR_14 += VAR_20;
  VAR_15 -= VAR_20;
  VAR_19 += VAR_20;
 }
 FUNC_1("returning %d\n", VAR_19);
 return VAR_19;
}

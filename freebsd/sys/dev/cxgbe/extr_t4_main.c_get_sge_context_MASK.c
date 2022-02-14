
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct t4_sge_context {scalar_t__ cid; scalar_t__ mem_id; int * data; } ;
struct adapter {int flags; int mbox; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct adapter*,int *,int,char*) ;
 int FUNC_1 (struct adapter*,int ) ;
 int FUNC_2 (struct adapter*,int ,scalar_t__,scalar_t__,int *) ;
 int FUNC_3 (struct adapter*,scalar_t__,scalar_t__,int *) ;

__attribute__((used)) static int
FUNC_4(struct adapter *VAR_9, struct t4_sge_context *VAR_10)
{
 int VAR_11;

 if (VAR_10->cid > VAR_7)
  return (VAR_4);

 if (VAR_10->mem_id != VAR_1 && VAR_10->mem_id != VAR_3 &&
     VAR_10->mem_id != VAR_2 && VAR_10->mem_id != VAR_0)
  return (VAR_4);

 VAR_11 = FUNC_0(VAR_9, ((void*)0), VAR_8 | VAR_6, "t4ctxt");
 if (VAR_11)
  return (VAR_11);

 if (VAR_9->flags & VAR_5) {
  VAR_11 = -FUNC_2(VAR_9, VAR_9->mbox, VAR_10->cid, VAR_10->mem_id,
      &VAR_10->data[0]);
  if (VAR_11 == 0)
   goto done;
 }





 VAR_11 = -FUNC_3(VAR_9, VAR_10->cid, VAR_10->mem_id, &VAR_10->data[0]);
done:
 FUNC_1(VAR_9, 0);
 return (VAR_11);
}

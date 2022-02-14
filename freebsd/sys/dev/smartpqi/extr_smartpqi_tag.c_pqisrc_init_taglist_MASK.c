
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_11__ {TYPE_1__* rcb; } ;
typedef TYPE_2__ pqisrc_softstate_t ;
struct TYPE_12__ {int max_elem; int lockcreated; int * elem_array; int lockname; int lock; scalar_t__ tail; scalar_t__ head; scalar_t__ num_elem; } ;
typedef TYPE_3__ pqi_taglist_t ;
struct TYPE_10__ {int tag; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_2__*,int *,int ) ;
 int * FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (TYPE_2__*,char*,int) ;
 int FUNC_5 (int ,char*,int ) ;
 int FUNC_6 (TYPE_3__*,int) ;

int FUNC_7(pqisrc_softstate_t *VAR_4, pqi_taglist_t *VAR_5,
    uint32_t VAR_6)
{
 int VAR_7 = VAR_3;
 int VAR_8 = 0;

 FUNC_1("IN\n");

 VAR_5->max_elem = VAR_6;
 VAR_5->num_elem = 0;
 VAR_5->head = 0;
 VAR_5->tail = 0;
 VAR_5->elem_array = FUNC_3(VAR_4,
   (VAR_6 * sizeof(uint32_t)));
 if (!(VAR_5->elem_array)) {
  FUNC_1("Unable to allocate memory for taglist\n");
  VAR_7 = VAR_2;
  goto err_out;
 }

     FUNC_5(VAR_5->lockname, "tag_lock", VAR_1);
     VAR_7 = FUNC_2(VAR_4, &VAR_5->lock, VAR_5->lockname);
     if(VAR_7){
         FUNC_0("tag lock initialization failed\n");
         VAR_5->lockcreated=0;
         goto err_lock;
 }
     VAR_5->lockcreated = 1;


 for (VAR_8=1; VAR_8 <= VAR_6; VAR_8++) {
  VAR_4->rcb[VAR_8].tag = VAR_0;
  FUNC_6(VAR_5, VAR_8);
 }

 FUNC_1("OUT\n");
 return VAR_7;

err_lock:
    FUNC_4(VAR_4, (char *)VAR_5->elem_array,
        (VAR_5->max_elem * sizeof(uint32_t)));
 VAR_5->elem_array = ((void*)0);
err_out:
 FUNC_1("OUT failed\n");
 return VAR_7;
}

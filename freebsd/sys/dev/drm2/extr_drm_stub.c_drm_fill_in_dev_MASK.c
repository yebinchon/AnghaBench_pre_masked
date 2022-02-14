
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_driver {int driver_features; } ;
struct drm_device {int counters; struct drm_driver* driver; int * counts; int * types; int map_hash; int pcir_lock; int ctxlist_mutex; int dev_struct_lock; int event_lock; int count_lock; int irq_lock; int vblank_event_list; int maplist; int ctxlist; int filelist; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (char*,...) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (struct drm_device*) ;
 int FUNC_5 (struct drm_device*) ;
 int FUNC_6 (struct drm_device*) ;
 scalar_t__ FUNC_7 (int *,int) ;
 int FUNC_8 (struct drm_device*) ;
 int FUNC_9 (struct drm_device*) ;
 int FUNC_10 (int *,char*,int *,int ) ;
 int FUNC_11 (int *,char*) ;

int FUNC_12(struct drm_device *VAR_9,
      struct drm_driver *VAR_10)
{
 int VAR_11, VAR_12;

 FUNC_2(&VAR_9->filelist);
 FUNC_2(&VAR_9->ctxlist);
 FUNC_2(&VAR_9->maplist);
 FUNC_2(&VAR_9->vblank_event_list);

 FUNC_10(&VAR_9->irq_lock, "drmirq", ((void*)0), VAR_2);
 FUNC_10(&VAR_9->count_lock, "drmcount", ((void*)0), VAR_2);
 FUNC_10(&VAR_9->event_lock, "drmev", ((void*)0), VAR_2);
 FUNC_11(&VAR_9->dev_struct_lock, "drmslk");
 FUNC_10(&VAR_9->ctxlist_mutex, "drmctxlist", ((void*)0), VAR_2);
 FUNC_10(&VAR_9->pcir_lock, "drmpcir", ((void*)0), VAR_2);

 if (FUNC_7(&VAR_9->map_hash, 12)) {
  return -VAR_1;
 }


 VAR_9->counters = 6;
 VAR_9->types[0] = VAR_5;
 VAR_9->types[1] = VAR_7;
 VAR_9->types[2] = VAR_3;
 VAR_9->types[3] = VAR_4;
 VAR_9->types[4] = VAR_6;
 VAR_9->types[5] = VAR_8;




 for (VAR_12 = 0; VAR_12 < FUNC_0(VAR_9->counts); VAR_12++)
  FUNC_3(&VAR_9->counts[VAR_12], 0);

 VAR_9->driver = VAR_10;

 VAR_11 = FUNC_8(VAR_9);
 if (VAR_11)
  goto error_out_unreg;



 VAR_11 = FUNC_5(VAR_9);
 if (VAR_11) {
  FUNC_1("Cannot allocate memory for context bitmap.\n");
  goto error_out_unreg;
 }

 if (VAR_10->driver_features & VAR_0) {
  VAR_11 = FUNC_6(VAR_9);
  if (VAR_11) {
   FUNC_1("Cannot initialize graphics execution "
      "manager (GEM)\n");
   goto error_out_unreg;
  }
 }

 VAR_11 = FUNC_9(VAR_9);
 if (VAR_11 != 0) {
  FUNC_1("Failed to create hw.dri sysctl entry: %d\n",
      VAR_11);
 }

 return 0;

      error_out_unreg:
 FUNC_4(VAR_9);
 return VAR_11;
}

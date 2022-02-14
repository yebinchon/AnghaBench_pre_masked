
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fdc_walk_ctx {scalar_t__* fd_present; void* acpi_dev; void* dev; scalar_t__ index; } ;
typedef void* device_t ;
typedef int devclass_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (void*,void*,int,int ,struct fdc_walk_ctx*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (void*,scalar_t__*,int) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (char*) ;
 int * FUNC_4 (int ,int) ;
 int FUNC_5 (void*,char*) ;
 int VAR_5 ;
 int * FUNC_6 (void*,char*,int) ;
 int FUNC_7 (struct fdc_walk_ctx*,int ) ;
 struct fdc_walk_ctx* FUNC_8 (int,int ,int ) ;

__attribute__((used)) static int
FUNC_9(device_t VAR_6, device_t VAR_7, void *VAR_8)
{
 struct fdc_walk_ctx *VAR_9;
 devclass_t VAR_10;
 int VAR_11;


 VAR_9 = FUNC_8(sizeof(struct fdc_walk_ctx), VAR_4, VAR_3);
 if (VAR_9 == ((void*)0)) {
  FUNC_5(VAR_7, "no memory for walking children\n");
  return (VAR_2);
 }
 FUNC_1(VAR_8, VAR_9->fd_present, sizeof(VAR_9->fd_present));
 VAR_9->index = 0;
 VAR_9->dev = VAR_7;
 VAR_9->acpi_dev = VAR_6;
 FUNC_0(VAR_9->acpi_dev, VAR_7, 1, VAR_5,
     VAR_9);


 VAR_10 = FUNC_3("fd");
 for (VAR_11 = 0; VAR_11 < VAR_0; VAR_11++)
  if (VAR_9->fd_present[VAR_11] == VAR_1 &&
      FUNC_4(VAR_10, VAR_11) == ((void*)0)) {
   if (FUNC_6(VAR_7, "fd", VAR_11) == ((void*)0))
    FUNC_5(VAR_7, "fd add failed\n");
  }
 FUNC_7(VAR_9, VAR_4);


 return (FUNC_2(VAR_7));
}

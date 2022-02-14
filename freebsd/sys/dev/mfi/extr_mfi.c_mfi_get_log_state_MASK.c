
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mfi_softc {int mfi_buffer_dmat; int mfi_dev; int mfi_io_lock; } ;
struct mfi_evt_log_state {int dummy; } ;
struct mfi_command {int cm_flags; int cm_dmamap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct mfi_softc*,struct mfi_command**,int ,void**,int) ;
 int FUNC_4 (struct mfi_softc*,struct mfi_command*) ;
 int FUNC_5 (struct mfi_command*) ;
 int FUNC_6 (int *,int ) ;

__attribute__((used)) static int
FUNC_7(struct mfi_softc *VAR_5, struct mfi_evt_log_state **VAR_6)
{
 struct mfi_command *VAR_7 = ((void*)0);
 int VAR_8;

 FUNC_6(&VAR_5->mfi_io_lock, VAR_1);
 VAR_8 = FUNC_3(VAR_5, &VAR_7, VAR_4,
     (void **)VAR_6, sizeof(**VAR_6));
 if (VAR_8)
  goto out;
 VAR_7->cm_flags = VAR_2 | VAR_3;

 if ((VAR_8 = FUNC_4(VAR_5, VAR_7)) != 0) {
  FUNC_2(VAR_5->mfi_dev, "Failed to get log state\n");
  goto out;
 }

 FUNC_0(VAR_5->mfi_buffer_dmat, VAR_7->cm_dmamap,
     VAR_0);
 FUNC_1(VAR_5->mfi_buffer_dmat, VAR_7->cm_dmamap);

out:
 if (VAR_7)
  FUNC_5(VAR_7);

 return (VAR_8);
}

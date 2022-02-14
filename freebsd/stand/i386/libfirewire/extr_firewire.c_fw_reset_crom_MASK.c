
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fwohci_softc {struct crom_chunk* crom_root; struct crom_src* crom_src; struct crom_src_buf* crom_src_buf; } ;
struct crom_src_buf {int vendor; } ;
struct crom_src {int chunk_list; } ;
struct crom_chunk {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct crom_chunk*,int) ;
 int FUNC_2 (struct crom_src*,int *,struct crom_chunk*,int ) ;
 int FUNC_3 (struct crom_chunk*,int ,int) ;
 int FUNC_4 (struct crom_src*,struct crom_chunk*,int *,char*) ;
 int FUNC_5 (struct fwohci_softc*) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static void
FUNC_7(struct fwohci_softc *VAR_3)
{
 struct crom_src_buf *VAR_4;
 struct crom_src *VAR_5;
 struct crom_chunk *VAR_6;

 FUNC_6("fw_reset\n");
 if (VAR_3->crom_src_buf == ((void*)0))
  FUNC_5(VAR_3);

 VAR_4 = VAR_3->crom_src_buf;
 VAR_5 = VAR_3->crom_src;
 VAR_6 = VAR_3->crom_root;

 FUNC_0(&VAR_5->chunk_list);

 FUNC_1(VAR_6, sizeof(struct crom_chunk));
 FUNC_2(VAR_5, ((void*)0), VAR_6, 0);
 FUNC_3(VAR_6, VAR_0, 0x0083c0);

 FUNC_3(VAR_6, VAR_1, VAR_2);



 FUNC_4(VAR_5, VAR_6, &VAR_4->vendor, "FreeBSD Project");

}

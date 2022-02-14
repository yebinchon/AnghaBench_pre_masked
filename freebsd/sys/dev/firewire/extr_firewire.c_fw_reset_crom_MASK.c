
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct firewire_comm {struct crom_chunk* crom_root; struct crom_src* crom_src; struct crom_src_buf* crom_src_buf; } ;
struct crom_src_buf {int hw; int vendor; } ;
struct crom_src {int chunk_list; } ;
struct crom_chunk {int dummy; } ;
struct TYPE_2__ {char* pr_hostname; int pr_mtx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int VAR_4 ;
 int FUNC_1 (struct crom_chunk*,int) ;
 int FUNC_2 (struct crom_src*,int *,struct crom_chunk*,int ) ;
 int FUNC_3 (struct crom_chunk*,int ,int) ;
 int FUNC_4 (struct crom_src*,struct crom_chunk*,int *,char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 TYPE_1__ VAR_5 ;

__attribute__((used)) static void
FUNC_7(struct firewire_comm *VAR_6)
{
 struct crom_src_buf *VAR_7;
 struct crom_src *VAR_8;
 struct crom_chunk *VAR_9;

 VAR_7 = VAR_6->crom_src_buf;
 VAR_8 = VAR_6->crom_src;
 VAR_9 = VAR_6->crom_root;

 FUNC_0(&VAR_8->chunk_list);

 FUNC_1(VAR_9, sizeof(struct crom_chunk));
 FUNC_2(VAR_8, ((void*)0), VAR_9, 0);
 FUNC_3(VAR_9, VAR_1, 0x0083c0);

 FUNC_3(VAR_9, VAR_2, VAR_3);
 FUNC_4(VAR_8, VAR_9, &VAR_7->vendor, "FreeBSD Project");
 FUNC_3(VAR_9, VAR_0, VAR_4);
 FUNC_5(&VAR_5);
 FUNC_4(VAR_8, VAR_9, &VAR_7->hw, VAR_5);
 FUNC_6(&VAR_5);
}

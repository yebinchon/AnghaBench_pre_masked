
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_virstor_metadata {int flags; int chunk_reserved; int chunk_next; int chunk_count; int provsize; int no; int provider; int md_count; int md_id; int md_chunk_size; int md_virsize; int md_name; int md_version; int md_magic; } ;
typedef int bin_stream_t ;


 int FUNC_0 (int *,unsigned char*) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;

void
FUNC_5(struct g_virstor_metadata *VAR_0, unsigned char *VAR_1)
{
 bin_stream_t VAR_2;

 FUNC_0(&VAR_2, VAR_1);

 FUNC_1(&VAR_2, VAR_0->md_magic, sizeof(VAR_0->md_magic));
 FUNC_3(&VAR_2, VAR_0->md_version);
 FUNC_1(&VAR_2, VAR_0->md_name, sizeof(VAR_0->md_name));
 FUNC_4(&VAR_2, VAR_0->md_virsize);
 FUNC_3(&VAR_2, VAR_0->md_chunk_size);
 FUNC_3(&VAR_2, VAR_0->md_id);
 FUNC_2(&VAR_2, VAR_0->md_count);

 FUNC_1(&VAR_2, VAR_0->provider, sizeof(VAR_0->provider));
 FUNC_2(&VAR_2, VAR_0->no);
 FUNC_4(&VAR_2, VAR_0->provsize);
 FUNC_3(&VAR_2, VAR_0->chunk_count);
 FUNC_3(&VAR_2, VAR_0->chunk_next);
 FUNC_2(&VAR_2, VAR_0->chunk_reserved);
 FUNC_2(&VAR_2, VAR_0->flags);
}

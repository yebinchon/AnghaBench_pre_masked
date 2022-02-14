
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_virstor_metadata {void* flags; void* chunk_reserved; void* chunk_next; void* chunk_count; void* provsize; void* no; int provider; void* md_count; void* md_id; void* md_chunk_size; void* md_virsize; int md_name; void* md_version; int md_magic; } ;
typedef int bin_stream_t ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,int ,int) ;
 void* FUNC_2 (int *) ;
 void* FUNC_3 (int *) ;
 void* FUNC_4 (int *) ;

void
FUNC_5(unsigned char *VAR_0, struct g_virstor_metadata *VAR_1)
{
 bin_stream_t VAR_2;

 FUNC_0(&VAR_2, (char *)(VAR_0));

 FUNC_1(&VAR_2, VAR_1->md_magic, sizeof(VAR_1->md_magic));
 VAR_1->md_version = FUNC_3(&VAR_2);
 FUNC_1(&VAR_2, VAR_1->md_name, sizeof(VAR_1->md_name));
 VAR_1->md_virsize = FUNC_4(&VAR_2);
 VAR_1->md_chunk_size = FUNC_3(&VAR_2);
 VAR_1->md_id = FUNC_3(&VAR_2);
 VAR_1->md_count = FUNC_2(&VAR_2);

 FUNC_1(&VAR_2, VAR_1->provider, sizeof(VAR_1->provider));
 VAR_1->no = FUNC_2(&VAR_2);
 VAR_1->provsize = FUNC_4(&VAR_2);
 VAR_1->chunk_count = FUNC_3(&VAR_2);
 VAR_1->chunk_next = FUNC_3(&VAR_2);
 VAR_1->chunk_reserved = FUNC_2(&VAR_2);
 VAR_1->flags = FUNC_2(&VAR_2);
}

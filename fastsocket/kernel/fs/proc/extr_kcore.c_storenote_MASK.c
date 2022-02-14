
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct memelfnote {int datasz; struct elf_note* data; struct elf_note* name; int type; } ;
struct elf_note {int n_namesz; int n_descsz; int n_type; } ;
typedef int en ;


 int FUNC_0 (struct elf_note*,int) ;
 scalar_t__ FUNC_1 (unsigned long,int) ;
 int FUNC_2 (struct elf_note*) ;

__attribute__((used)) static char *FUNC_3(struct memelfnote *VAR_0, char *VAR_1)
{
 struct elf_note VAR_2;



 VAR_2.n_namesz = FUNC_2(VAR_0->name) + 1;
 VAR_2.n_descsz = VAR_0->datasz;
 VAR_2.n_type = VAR_0->type;

 do { memcpy(VAR_1,&VAR_2,sizeof(VAR_2)); VAR_1 += sizeof(VAR_2); } while(0);
 do { FUNC_0(VAR_1,VAR_0->name,VAR_2.n_namesz); VAR_1 += VAR_2.n_namesz; } while(0);


 VAR_1 = (char*) FUNC_1((unsigned long)VAR_1,4);
 do { FUNC_0(VAR_1,VAR_0->data,VAR_0->datasz); VAR_1 += VAR_0->datasz; } while(0);
 VAR_1 = (char*) FUNC_1((unsigned long)VAR_1,4);



 return VAR_1;
}

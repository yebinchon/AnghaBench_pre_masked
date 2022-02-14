
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bhnd_erom_io {int fini; int read; int tell; int map; } ;
struct bhnd_erom_iores {int owner_rid; int mapped_rid; struct bhnd_erom_io eio; int * mapped; int owner; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct bhnd_erom_iores* FUNC_0 (int,int ,int) ;

struct bhnd_erom_io *
FUNC_1(device_t VAR_7, int VAR_8)
{
 struct bhnd_erom_iores *VAR_9;

 VAR_9 = FUNC_0(sizeof(*VAR_9), VAR_0, VAR_1 | VAR_2);
 VAR_9->eio.map = VAR_4;
 VAR_9->eio.tell = VAR_6;
 VAR_9->eio.read = VAR_5;
 VAR_9->eio.fini = VAR_3;

 VAR_9->owner = VAR_7;
 VAR_9->owner_rid = VAR_8;
 VAR_9->mapped = ((void*)0);
 VAR_9->mapped_rid = -1;

 return (&VAR_9->eio);
}
